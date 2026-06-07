#include<iostream>
using namespace std;


int main()
{


int n;
cout<<"Enter number of elements: ";
cin>>n;

int arr[n];


cout<<"Enter the elements (space-separated or newline):\n";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

//precompute
int hash[13]={0};

for(int i=0;i<n;i++)
{
    hash[arr[i]]+=1;
}

int q;
cout<<"Enter number of queries: ";
cin>>q;

while(q--)
{
    int number;
    cout<<"Query number: ";
    cin>>number;
    cout<<"Frequency of "<<number<<": "<<hash[number]<<endl;
}



    return 0;
}