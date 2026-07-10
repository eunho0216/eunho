#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sex;
    int adult;
    cin>>sex;
    cin>>adult;
    if(sex==0){
        if(adult>=19){
            cout<< "MAN";
        }else{
            cout <<"BOY";
        }
    }else{
        if(adult>=19){
            cout<<"WOMAN";
        }else{
            cout<<"GIRL";
        }
    }
    return 0;
}