/*


A
AB
ABC
ABCD
ABCDE

*/



#include<iostream>
using namespace std;

void pat(int n)
{

    char count = 'A';

for(int i =0;i<n;i++)
{
for(int j=0;j<i+1;j++)
    {
        char count = 'A';
         count = count+j;
        cout<<count;
        
    }

    for(int j=0;j<n-i;j++)
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