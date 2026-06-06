#include<iostream>
#include<cmath>

using namespace std;
int main()
{

int n;
cout<<"Enter the Digit: ";
cin>>n;


int cnt = (int)(log10(n)+1);
cout<<cnt;


return 0;
}