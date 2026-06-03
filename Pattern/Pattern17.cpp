// Question: Print the pattern
//    A
//   ABA
//  ABCBA
// ABCDCBA

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
        // spaces
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';

        // characters
        for(int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;

            if(j < i)
            {
                ch++;
            }
            else
            {
                ch--;
            }
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