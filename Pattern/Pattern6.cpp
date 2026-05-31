#include<iostream>
using namespace std;


void pat(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1;
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