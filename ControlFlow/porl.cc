#include <iostream>
using namespace std;

int main() {
    int b, s;
    cout<<"Bought at: ";
    cin>>b;
    cout<<"Sold at: ";
    cin>>s;
    if (b>s) {
        cout<<"Loss: " << b-s;
    }
    else if (s>b) {
        cout<<"Profit: " << s-b;
    }
    else {
        cout<<"market price";
    }
    return 0;
}