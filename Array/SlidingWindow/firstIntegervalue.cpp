#include<bits/stdc++.h>
using namespace std;



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) 
{
        vector<long long> ans;
        queue<long long> q;
        
        long long int i=0,j=0;
        
        while(j<N){
           
            if(A[j]<0){
                q.push(A[j]);
            }
            
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                
                if(q.empty()){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(q.front());
                    
                    if(A[i]==q.front()){
                        q.pop();
                    }
                }
                i++,j++;
            }
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