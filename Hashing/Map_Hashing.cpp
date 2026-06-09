// Aim: To find the frequency of elements using map in C++

// Name - ADITYA BHARDWAJ
// Section - D2
// Roll No - 07
// Course – B TECH
// Branch – CSE

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre-computation (Frequency Counting)
    map<int, int> mpp;

    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    cout << "\nFrequency Table:\n";
    for(auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    int q;

    cout << "\nEnter the number of queries: ";
    cin >> q;

    while(q--)
    {
        int number;

        cout << "\nEnter number to find its frequency: ";
        cin >> number;

        cout << "Frequency of " << number << " = "
             << mpp[number] << endl;
    }

    return 0;
}