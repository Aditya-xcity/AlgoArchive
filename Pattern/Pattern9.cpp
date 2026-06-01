#include<iostream>
using namespace std;




void pat2(int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"-";
            
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
            
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"-";
            
        }
        cout<<"\n";
        

    }
}


void pat(int n)
{
   
    
    pat2(n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"-";
            
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            cout<<"*";
            
        }
        for(int j=0;j<i;j++)
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