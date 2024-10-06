//C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    string cmd;
    while(cin >> cmd){
        if(cmd == "PUSH"){
            int val; cin >> val;
            s.push(val);
        }
        else if(cmd == "POP"){
            if(!s.empty()){
                cout << s.top() << endl;
                s.pop();
            }
            else cout << "NULL" << endl;
        }
        else return 0;
    }
}

