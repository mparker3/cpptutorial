#include <iostream>
using namespace std;

int main() {
    int principal, time, rate, interest;
    cout<<"What is the principal amount?";
    cin>>principal;
    cout<<"What is the interest rate?";
    cin>>rate;
    cout<<"How long should interest be calculated for?";
    cin>>time;
    interest = (principal*rate*time)/100;
    cout<<"Interest is "<< interest;
    return 0;
}