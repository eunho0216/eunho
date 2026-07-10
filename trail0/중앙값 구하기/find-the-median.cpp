#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,C;
    cin >>A>>B>>C;
    if(A>B){
        if(A>C){
            if(B>C){
                cout<<B;
            }else{
                cout<<C;
            }
        }else{
            cout<<A;
        }
    }else{//A<B
        if(B<C){
            cout<<B;
        }else{//B>C
            if(C>A){
                cout<<C;
            }else{
                cout<<A;
            }
        }
    }
    return 0;
}