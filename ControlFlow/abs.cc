#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Number: ";
    cin>>n;
    if (n < 0) {
        cout<<"Absolute value: " << -(n);
    }
    else {
        cout<<"Absolute value: " << n;
    }
    return 0;
}