

#include<iostream>
using namespace std;

void pat(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<i+1;j++)
        {
            cout<<j+1;
        }

        for(int j = 0;j<(2*(n-1)-2*(i));j++)
        {
            cout<<" ";

        }

        for(int j = 0;j<i+1;j++)
        {
            cout<<i-j+1;
        }


        cout<<endl;



    }
}

int main()
{
    int n;
    cin>>n;

    pat(n);

    return 0;
}