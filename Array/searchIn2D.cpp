#include<bits/stdc++.h>
using namespace std;

void main(){
    vector<int> matrix= {1,3};
    int target= 3;
    for(int i = 0; i<matrix.size(); i++){
        for(int j =0; j<matrix[0].size(); j++){
            if(matrix[i][j] == target){
                cout << " present ";
            }
        }
    }
    cout << " not ";
}