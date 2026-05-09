#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;

void check_cols(vector<unordered_set<int>> &cols, int i, int j, int ele){
    if(cols[j].find(ele)!=cols[j].end()){
        //duplicate found
        cout << "duplicate found in col" << " " << j << endl;
        return;
    }
    cols[j].insert(ele);
}

void check_rows(vector<unordered_set<int>> &rows, int i, int j, int ele){
    if(rows[i].find(ele)!=rows[i].end()){
        //duplicate found
        cout << "duplicate found in row" << " " << i << endl;
        return;
    }
    rows[i].insert(ele);
}

void check_grid(vector<vector<unordered_set<int>>> &grid, int i, int j, int ele){
    int x = floor(i/3);
    int y = floor(j/3);

    if(grid[x][y].find(ele)!=grid[x][y].end()){
        //duplicate found
        cout << "duplicate found in cell" << " " << i << j << endl;
        return;
    }
    grid[x][y].insert(ele);
}



int main(){
    vector<vector<int>> matrix(9, vector<int>(9,0));
    matrix[0][2] = 1;

    vector<unordered_set<int>> rows(9);
    vector<unordered_set<int>> cols(9);
    vector<vector<unordered_set<int>>> grid(3, vector<unordered_set<int>>(3));

    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if(matrix[i][j] != 0){
                check_cols(cols, i, j, matrix[i][j]);
                check_rows(rows, i, j, matrix[i][j]);
                check_grid(grid, i ,j, matrix[i][j]);
            }
        }
    }

}