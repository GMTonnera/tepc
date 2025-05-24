#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string exp;
    
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> exp;

        if(exp[1] == '=') {
            if(exp[0] == exp[2]) {
                cout << exp;
            }
            else {
                cout << exp.substr(0,2) + exp[0];
            }
                
        }   
        else if(exp[1] == '>') {
            if(exp[0] - '0' > exp[2] - '0'){
                cout << exp;
            }
            else if(exp[0] == exp[2]) {
                cout << exp[0] << '=' << exp[2];
            }
            else{
                cout << exp[0] << '<' << exp[2];
            }
        }
        else {
            if(exp[0] - '0' < exp[2] - '0'){
                cout << exp;
            }
            else if(exp[0] == exp[2]) {
                cout << exp[0] << '=' << exp[2];
            }
            else{
                cout << exp[0] << '>' << exp[2];
            }
        }

        if(i < t-1) {
            cout << endl;
        }
    }
    return 0;
}