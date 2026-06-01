#include<iostream>
using namespace std;
void pat2(int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<"*";
        }

        for(int j=0;j<i+1;j++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
}


void pat1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        for(int j=0;j<n-1-i;j++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
    pat2(n);
}







int main()
{
    int n;
    cin>>n;

    pat1(n);
    return 0;
}