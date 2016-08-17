#include<iostream>
using namespace std;

int main() {
    float ftemp, ctemp;
    cout<<"Temperature in farenheit: ";
    cin>>ftemp;
    ctemp = (ftemp-32) * 5/9;
    cout<<"Temperature in celsius: " << ctemp;
    return 0;
}