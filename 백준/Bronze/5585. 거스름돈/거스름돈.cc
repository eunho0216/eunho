#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;

deque <int> q;
vector <int> v;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int m = 0;
    cin >> m;
    int money = 1000-m;
    int count = 0;

    if (money >= 500){
        money -= 500;
        count++;
    }
    
    if(money >= 100){
        int a = money /100;
        money = money - 100*a;
        count += a;
    }
    
    if(money >= 50){ //96
        money -= 50;
        count++;
    }
    if(money >= 10){ //46
        int a =money /10;
        money = money - 10*a;
        count += a;
    }
    if(money >= 5){ //6
        money -= 5;
        count++;
    }
    if(money >= 1) {//3
        int a = money /1;
        money = money -1*a;
        count +=a;
    }
    cout << count << '\n';





    return 0;
}