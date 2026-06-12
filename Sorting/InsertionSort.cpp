#include<iostream>
using namespace std;


void insertionSort(int A[],int n)
{

    //12,54,65,7,23,9
    int key,j;

//loop for passes
for(int i=1;i<n-1;i++)
{

 key = A[i];
 j = i-1;

 //loop for each pass



}





}



void printArray(int A[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}
cout<<endl;
}


int main()
{


    // 4 5 6 7 3 2


    int A[] = {12,54,65,7,23,9};
    int n = 6;
    insertionSort(A,n);
    printArray(A,n);














    return 0;
}