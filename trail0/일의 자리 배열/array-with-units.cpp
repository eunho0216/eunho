#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int array[10];
    cin >> array[0] >> array[1];
    for(int i= 2; i <10; i++){
        int sum =array[i-2]+array[i-1];
        if(sum>9){
            array[i]= sum-10;
        }
        else{
            array[i]=sum;
        }
    }
    for(int i = 0; i<10; i ++){
        cout<<array[i]<<" ";
    }
    return 0;
}