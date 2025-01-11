#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    while (T--) {
        int N;
        cin >> N;  // Read the number of students

        // Reading the student names
        vector<string> studentNames(N);
        for (int i = 0; i < N; i++) {
            cin >> studentNames[i];
        }

        // Reading the attendance records
        vector<string> attendanceRecords(N);
        for (int i = 0; i < N; i++) {
            cin >> attendanceRecords[i];
        }

        vector<string> studentsDenied;  // To store students with insufficient attendance

        for (int i = 0; i < N; i++) {
            string record = attendanceRecords[i];
            int presentCount = 0, absentCount = 0;

            // Calculate present and absent counts (ignore 'M' for calculation)
            for (char c : record) {
                if (c == 'P') presentCount++;
                else if (c == 'A') absentCount++;
            }

            // Calculate attendance percentage
            int totalClasses = presentCount + absentCount;
            double attendancePercentage = (double) presentCount / totalClasses * 100;

            // If the attendance percentage is less than 75%, mark the student
            if (attendancePercentage < 75.0) {
                studentsDenied.push_back(studentNames[i]);
            }
        }

        // Output the names of students who will be denied the exams
        for (size_t i = 0; i < studentsDenied.size(); i++) {
            if (i > 0) cout << " ";  // Print space between names
            cout << studentsDenied[i];
        }
        cout << endl;
    }

    return 0;
}

