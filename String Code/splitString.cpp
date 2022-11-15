#include<bits/stdc++.h>
using namespace std;

int maxUniqueSplit(string s) {
    vector<string> ans;
    string str = "";
    for(int i=0; i<s.size(); i++){
        str += s[i];
        cout << binary_search(ans.begin(), ans.end(),str) << "";
        if(!binary_search(ans.begin(), ans.end(),str)){
            ans.push_back(str);
            str = "";
        }
    
    }
    for(int i =0; i<ans.size(); i++){
        cout << ans[i]<< " ";
    }
    return ans.size();
}

int main(){
    string s = "dbtb";
    cout << maxUniqueSplit(s);
    return 0;
}