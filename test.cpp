#include <bits/stdc++.h>

using namespace std;

int main() {
    int temp;
    vector<vector<int>> matrix;
    vector<int> vec;
    vector<pair<int,int>> vec_p;

    for(int i = 0; i < 3; i++) {
        vec = {};
        for(int j = 0; j < 3; j++) {
            cin >> temp;
            if(temp == 0) {
                vec_p.push_back(make_pair(i,j));
            }
            vec.push_back(temp);
        }
        matrix.push_back(vec);
    }

    if(matrix[0][0] == 0 and matrix[1][1] == 0 and matrix[2][2] == 0) {

    } else if(matrix[0][2] == 0 and matrix[1][1] == 0 and matrix[2][0] == 0) {

    } else {
        while()

        if(matrix[0][0] == 0) {
            matrix[0][0] = max_s - max({sums[0], sums[3], sums[6]});
        } else if(matrix[0][1] == 0) {
            matrix[0][1] = max_s - max({sums[0], sums[4]});
        } else if(matrix[0][2] == 0) {
            matrix[0][2] = max_s - max({sums[0], sums[5], sums[7]});
        } else if(matrix[1][0] == 0) {
            matrix[1][0] = max_s - max({sums[1], sums[3]});
        } else if(matrix[1][1] == 0) {
            matrix[1][1] = max_s - max({sums[1], sums[4], sums[6], sums[7]});
        } else if(matrix[1][2] == 0) {
            matrix[1][2] = max_s - max({sums[1], sums[5]});
        } else if(matrix[2][0] == 0) {
            matrix[2][0] = max_s - max({sums[2], sums[4], sums[7]});
        } else if(matrix[2][1] == 0) {
            matrix[2][1] = max_s - max({sums[2], sums[5]});
        } else if(matrix[2][2] == 0) {
            matrix[2][2] = max_s - max({sums[2], sums[6], sums[6]});
        } 

    }


    return 0;

}
