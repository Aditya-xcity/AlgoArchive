// Question: Print the pattern
// E
// DE
// CDE
// BCDE
// ABCDE

/*
Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include<iostream>
using namespace std;

void pat(int n)
{
    for(int i = 0; i < n; i++)
    {
        char start = 'A' + (n - 1) - i;

        for(int j = 0; j < i + 1; j++)
        {
            cout << char(start + j);
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    pat(n);

    return 0;
}