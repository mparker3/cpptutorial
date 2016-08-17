#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Please enter a character: ";
    cin>>ch;
    cout<<"ASCII Equivalent is: " << static_cast<int>(ch);
    return 0;
}