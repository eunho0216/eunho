#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>> b>> c;
    int sum = a+b+c;
    double avg = sum / 3.0;
    cout << sum<<endl;
    cout<< avg<<endl;
    cout << sum -avg<<endl;
    return 0;
}