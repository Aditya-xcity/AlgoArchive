#include<iostream>
using namespace std;

void pat(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
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