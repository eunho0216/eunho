#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <int> v;
//0 1 1 2 3 5 8 13 21
int Fibo(int n){
    int dp[55];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp [i-2];
    }
    return dp[n];
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n = 0;
    cin >> n;
    cout << Fibo(n);
    return 0;
}
