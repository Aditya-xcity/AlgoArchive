// Aim: To sort an array using Insertion Sort algorithm.

/*
Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include<iostream>
using namespace std;

void insertionSort(int A[], int n)
{
    int key, j;

    for(int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;

        while(j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
    }
}

void printArray(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;

    insertionSort(A, n);
    printArray(A, n);

    return 0;
}