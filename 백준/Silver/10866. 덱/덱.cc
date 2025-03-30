#include <iostream>
#include <string>
#include <deque>
using namespace std;

deque <int> q;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string command;
    
    int N = 0;
    int n = 0;
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> command;
        if(command == "push_front"){
            cin >> n;
            q.push_front(n);
        }
        else if (command == "push_back"){
            cin >> n;
            q.push_back(n);
        }
        else if ( command == "pop_front"){
            
            if( q.size() == 0){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
                q.pop_front();
            }
        }
        else if ( command == "pop_back"){
            
            if( q.size() == 0){
                cout << -1 << '\n';
            }
            else{
                cout << q.back() << '\n';
                q.pop_back();
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
