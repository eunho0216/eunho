#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    cin>>A>>B;
    double avg = (double)A+(double)B;
    avg /=2;
    cout<<fixed;
    cout.precision(1);
    cout<<A+B<<" "<<avg;
    return 0;
}