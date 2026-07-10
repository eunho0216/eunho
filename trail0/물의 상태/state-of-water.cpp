#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    if(n<0){
        cout<<"ice"<<endl;
    }else if(0<=n && n<100){
        cout<< "water"<<endl;
    }else{
        cout <<"vapor";
    }
    return 0;
}