#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    string line;

    cin >> n >> t;
    cin >> line;

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < line.length()-1; j ++) {
            if(line[j] == 'B' and line[j+1] == 'G') {
                swap(line[j], line[j+1]);
                j++;
            }
        }
    }

    cout << line << "\n";


    return 0;
}