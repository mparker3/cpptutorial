#include <iostream>
using namespace std;

void zero_small(int &a, int &b); //takes two int address arguments

int main() {
    int a, b;
    cout<<"Please input two integers: ";
    cin>>a>>b;
    zero_small(a, b);
    cout<<"The integers are now "<<a<<" "<<b;
}

void zero_small(int &a, int &b){
    if (a>b) {
        b=0;
    }
    else {
        a=0;
    }
}