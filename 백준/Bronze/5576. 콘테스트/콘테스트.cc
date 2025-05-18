#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int W[10];
    int K[10];
    int result1, result2;
    for ( int i = 0 ; i <10; i++){
        int n;
        cin >> n;
        W[i]= n;
    }
    for ( int i = 0 ; i <10; i++){
        int n;
        cin >> n;
        K[i]= n;
    }
    sort( W, W+10);
    sort( K, K+10);
    result1 = W[7] + W[8] + W[9];
    result2 = K[7] + K[8] + K[9];
    cout << result1 << " "<< result2;
    return 0;
}