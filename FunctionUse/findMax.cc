//function to take a list of numbers for the user, and display the maximum value
#include <iostream>
using namespace std;

int* findMax(int n, int arr[]);

int main(){
    int n, *p, i;
    cout<<"Enter number of data values: ";
    cin>>n;
    int array[n]; //creates array
    for (i=0; i < n; i++) {
        cout<<"Enter array value number "<<i+1<<":";
        cin>>array[i]; //populates array
    }
    p = findMax(n, array);
    cout<<"The maximum array value is "<<*p;
    return 0;
}

int* findMax(int n, int arr[]) { //returns pointer to highest value in array. n: number of values in array, arr[]: array to search
    int* max = arr; //creates an int pointer to the first value of the array
    int i;
    for (i=1; i<n; i++) {
        if (*max<*(max + i)) { //if the value pointed to by *max is less than the value pointed to by *(max+i)
            *max = *(max + i); //set max to point to the address of the new highest value
        }
    }
    return max;  //returns the address of the maximum value
}