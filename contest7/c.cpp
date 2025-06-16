#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        long long a1, a2, a3, a4, jokes;
        cin >> a1 >> a2 >> a3 >> a4;
        
        long long alice = a1, bob = a1, total = a2 + a3 + a4;
    
        if(a1 == 0) {
            jokes = 1;
        } else if(abs(a2-a3) > a1) {
            jokes = (min(a2, a3)+a1)*2 + 1;
        } else if(abs(a2-a3) == a1 and a4 > 0) {
            jokes = a1 + a2 + a3 + 1;
        } else if(abs(a2-a3) == a1 and a4 == 0) {
            jokes = a1 + a2 + a3;
        } else if(abs(a2-a3) < a1 and a4 > 0 and a4 >= a1 - abs(a2-a3) + 1) {
            jokes = a1 + a2 + a3 + (a1 - abs(a2-a3) + 1);
        } else if(abs(a2-a3) < a1 and a4 > 0 and a4 < a1 - abs(a2-a3) + 1) {
            jokes = a1 + a2 + a3 + a4;
        } else if(abs(a2-a3) < a1 and a4 == 0) {
            jokes = a1+a2+a3;
        } 

        cout << jokes << "\n";
    }


    return 0;
}




/*
a2 > a3:
exemplo: 2 5 3 0
alice = 2 + 2 -3 + 1 = 4
bob = 2 -2 + 3 -1 = 0


*/