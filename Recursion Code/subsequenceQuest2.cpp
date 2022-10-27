#include<bits/stdc++.h>
using namespace std;
void solve(string str, string output, int index, vector<string>& ans){
    if (index>=str.length())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    solve(str, output, index+1, ans);
    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1,ans);
}
vector<string> subsets(string str){
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main(){
    string str = {"abcg"};
    vector<string> ans = subsets(str);
    for (int i = 0; i <ans.size() ; i++)
    {
        cout << "{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] <<" ";
        }
        cout << "} " << " ";
    }
    
    return 0;
} 