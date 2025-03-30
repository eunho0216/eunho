#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue <int> q;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string command;
    
    int N = 0;
    int n = 0;
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> command;
        if(command == "push"){
            cin >> n;
            q.push(n);
        }
        else if ( command == "pop"){
            
            if( q.size() == 0){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if( command == "size"){
            cout << q.size() << '\n';
        }
        else if( command == "empty"){
            if( q.size() == 0){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if ( command =="front"){
            if( q.size() == 0){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
            }
        }
        else if (command == "back"){
            if( q.size() == 0){
                cout << -1 << '\n';
            }
            else{
                cout << q.back() << '\n';
            }
        }
    }


    return 0;
}