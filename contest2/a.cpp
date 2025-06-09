#include <bits/stdc++.h>

using namespace std;

int main() {
    char c1, c2, c3;

    cin >> c1 >> c2 >> c3;

    if(c1 == '<' and c2 == '<' and c3 == '>') {
        cout << "C\n";
    } else if(c1 == '<' and c2 == '>' and c3 == '>') {
        cout << "A\n";
    } else if(c1 == '>' and c2 == '<' and c3 == '<') {
        cout << "A\n";
    } else if(c1 == '>' and c2 == '>' and c3 == '<') {
        cout << "C\n";
    } else if(c1 == '>' and c2 == '>' and c3 == '>') {
        cout << "B\n";
    } else if(c1 == '<' and c2 == '<' and c3 == '<') {
        cout << "B\n";
    } 


    return 0;
}