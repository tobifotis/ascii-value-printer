// Simple C++ program to read 5 characters from the user and display their ASCII values.

#include <iostream>
using namespace std;

int main()
{
    char a1, a2, a3, a4, a5;

    cout << "Enter 5 Alphabets: ";
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    cout << "ASCII value is: " << endl;
    cout << a1 << ": " << int(a1) << endl << a2 << ": " << int(a2) << endl << a3 << ": " << int(a3) << endl << a4 << ": " << int(a4) << endl << a5 << ": " << int(a5);
}

