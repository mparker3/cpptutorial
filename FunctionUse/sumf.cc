#include <iostream>
using namespace std;

int main(){
    int arr[5], i;
    int* p = arr;
    
    cout<<"Enter 5 numbers separated with spaces: ";
    cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
    for (i=0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}