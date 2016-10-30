#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int reversed = 0;
    while (number != 0)
    {
        int currentDigit = number % 10;
        reversed = reversed * 10; // всички цифри с една наляво
        reversed += currentDigit;
        number /= 10;
    }
    cout << reversed << endl;

    return 0;
}
