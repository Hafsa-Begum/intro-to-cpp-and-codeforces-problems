// Given a number N and an array A of N numbers. Print the numbers after sorting them.

// Note:

// Don't use built-in-functions.
// try to solve it with bubble sort algorithm or Selection Sort.
// for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
// Input
// First line contains a number N (0 < N < 103) number of elements.

// Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the numbers after sorting them.

// Examples
// inputCopy
// 3
// 3 1 2
// outputCopy
// 1 2 3 
// inputCopy
// 4
// 5 2 7 3
// outputCopy
// 2 3 5 7 

//link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

#include <iostream>
#include <utility>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}