
// A----
// BB----
// CCC----
// DDDD----
// EEEEE----
#include<iostream>
using namespace std;

void pat(int n)
{

for(int i =0;i<n;i++)
{
    char x = 'A';
    x = x+i;

    for(int j =0;j<i+1;j++)
    {

        // x = x+i;
        cout<<x;

    }
    for(int j =0;j<n-1;j++)
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