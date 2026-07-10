#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    cin >> A>>B;
    int result1, result2;
    if(A<B){
        result1 = 1;
    }else{
        result1 = 0;
    }

    if(A==B){
        result2 = 1;
    }else{
        result2 = 0;
    }

    cout << result1<<" "<<result2;
    return 0;
}