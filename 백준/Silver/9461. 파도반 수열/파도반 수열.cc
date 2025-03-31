#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <int> v;
//0 1 1 2 3 5 8 13 21
int T,N;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    
    for(int i = 0 ; i < T ; i++){
        cin >> N;
        long long dp[100];
        dp[0]=1;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        dp[4] = 2;
        for(int i = 5; i <= 100; i++){
            dp[i] = dp[i-1] + dp[i-5];
        }
        cout << dp[N-1] << '\n';
    }


    return 0;
}
