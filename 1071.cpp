#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    // Ensure x is the smaller number and y is the larger number
    if (x > y)
    {
        swap(x, y);
    }

    int sum = 0;

    //  the range between x and y
    for (int i = x + 1; i < y; i++)
    {
        if (i % 2 != 0)    // Check if the number is odd
        {
            sum += i;
        }
    }

    // sum of odd numbers between x and y
    cout << sum << endl;

    return 0;
}
