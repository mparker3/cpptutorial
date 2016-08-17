#include<iostream>
using namespace std;

int main(){
    int a, b, swap;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swap = a;
    a = b;
    b = swap;
    cout<<"Swapped numbers are"<<a<<" "<<b;
    return 0;
}