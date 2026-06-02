/*
ABCDE
ABCD-
ABC--
AB---
A----

*/

#include<iostream>
using namespace std;

void pat(int n)
{

for(int i =0;i<n;i++)
{
    for(int j = 0;j<n-i;j++)
    {
        char x = 'A';
        x = x+j;
        cout<<x;
       
    }

    for(int j=0;j<i;j++)
    {
        cout<<"-";
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