#include<bits/stdc++.h>
using namespace std;

vector<int> printFirstNegativeInteger(int A[],int N,int k) {
        // cout << "enter" << endl;
    vector<int> ans;
    int j =0;
    queue<int> li;
    for(int i = 0; i<N && j<N; i++){
        if((j-i+1)<k){
            // cout << "Uder 1st "<< A[j] << endl;
            if(A[j]<0) {
                li.push(A[j]);
            }
            j++;
        }
        else if(j-i+1==k){
            cout << "ans size" <<li.size();
            if(li.size()==0){
                ans.push_back(0);
            }
            else{
                // cout << "enter" << endl;
                ans.push_back(li.front());
                if(A[i]==li.front()) {
                    li.pop();
                }
            }
            j++;
            i++;
        }
        
    }
    // 
    for(auto it : ans){
        cout<< it <<" ";
    }

    return ans;              
 }

int main(){
    int A[6]={3,-1,-7,2,8,5};
    vector<int> v = printFirstNegativeInteger(A,6,1);
    cout << "done";
    for(auto it : v){
        cout<< it <<" ";
    }
    return 0;
}