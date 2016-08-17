//swaps the first and last element of a dynamically allocated array
#include <iostream>
using namespace std;

int* makearr(int &n);

int main(){
    int i, swap;
    int n=0;
    int* arr = makearr(n);
    cout<<"Original array\n";
    for (i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    swap = arr[n-1];
    arr[n-1] = arr[0];
    arr[0] = swap;
    cout<<"Swapped array\n";
    for (i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    delete arr;
    return 0;
}

int* makearr(int &n) {
    int i, temp;
    int* arr; //pointer to eventual first value of the array
    cout<<"Enter the size of the array: ";
    cin>>n;
    arr = new int[n]; //initalizes
    for (i=0; i<n; i++) {
        cout<<"\nEnter value for array slot "<<i+1<<": ";
        cin>>temp;
        arr[i]=temp;
    }
    return arr;
}