#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int amath,aeng,bmath,beng;
    cin >> amath>>aeng;
    cin >> bmath>>beng;
    if(amath>bmath && aeng>beng){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}