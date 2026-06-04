
// A----
// BB----
// CCC----
// DDDD----
// EEEEE----
#include<iostream>
using namespace std;



void pat(int n)
{
char y = 'A';
for(int i=0;i<n;i++)
{
   
    for(int k = 0;k<n-1;k++)
    {
        y = y+i;
        cout<<y;
        cout<<endl;
        
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