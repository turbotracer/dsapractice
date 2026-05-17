#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


int main(){
    vector<vector<int>> matrix(3, vector<int>(3));
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 0;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 0;
    matrix[2][2] = 9;

    unordered_set<int> rows;
    unordered_set<int> cols;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){

            if (matrix[i][j] == 0){
                rows.insert(i);
                cols.insert(j);
                int k = i;
                while(k >= 0){
                    if (matrix[k][j]!=0){
                        matrix[k][j] = 0;
                    }
                    k--;
                }
                int l = j;
                while (l>= 0){
                    if (matrix[i][l]!=0){
                        matrix[i][l] = 0;
                    }
                    l--;
                }
            }
            if (rows.find(i)!=rows.end() || cols.find(j)!=cols.end()){
                matrix[i][j] = 0;
            }
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << matrix[i][j] << endl;
        }
    }
}