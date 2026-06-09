#include<iostream>
using namespace std;

int main()
{

    string s;
    cout<<"Enter a lowercase string: ";
    cin>>s;


    //pre compute
    int hash[26]={0};


    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"Query character: ";
        cin>>c;
        cout<<"Frequency of '"<<c<<"': "<<hash[c-'a']<<endl;
    }




    return 0;
}