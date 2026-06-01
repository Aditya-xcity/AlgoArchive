// Question: Print the pattern
// 1
// 01
// 101
// 0101
// 10101

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
    int start;
    for(int i =0;i<n;i++)
    {
         if(i%2==0)
            {
                start = 1;
            }
            else
            {
                start = 0;
            }


        for(int j =0;j<i+1;j++)
        {
            

            cout<<start;
            start = not(start);

           
            
       


        }

        for(int j =0;j<n-1-i;j++)
        {
            cout<<"-";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;

    pat(n);

    return 0;
}