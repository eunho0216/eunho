#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr1="";
    string arr2="";
    cin >> arr1 >> arr2;
    if(arr1.length()>arr2.length()){
        cout<< arr1<<" "<<arr1.length();
    }else if(arr1.length()== arr2.length()){
        cout <<"same";
    }else{
        cout << arr2 << " "<<arr2.length();
    }

    return 0;
}