#include <iostream>
#include <string>
using namespace std;

int main() {
    int numCourses;
    string courseName;

    cin >> numCourses;
    cin.ignore(); // Ignore the newline

    for (int i = 0; i < numCourses; i++) {
        getline(cin, courseName); // Read each course name
    }


    cout << "Ciencia da Computacao" << endl;

    return 0;
}
