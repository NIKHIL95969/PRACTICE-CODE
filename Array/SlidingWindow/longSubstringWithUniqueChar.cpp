#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = 0;
        string str = "";
        unordered_map<char,int> mp;
        int i =0; int j =0;

//         while(i<s.size()){
//             auto isFound = str.find(s[i]);

//             if(isFound!=string::npos){
//                 int str_sz = str.size();
//                 sz = max(sz,str_sz);
                
//                 str.erase(str.begin(),str.begin()+isFound+1);
//                 str += s[i++];
//             }
//             else{
//                 str += s[i++]; 
//             }
//         }
//         int str_sz = str.size();
//         sz = max(sz,str_sz);
        
        int cnt = 0;
        while(j<s.size()){
            mp[s[j]]++;
            
            // if(mp.size()>j-i+1) j++;
            if(mp.size()==j-i+1){
                int mx = mp.size();
                sz = max(sz,mx);
                j++;
            }
            else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(!mp[s[i]]) mp.erase(s[i]);
                    i++;
                }
                cnt--; j++;
            }
        }
        
        return sz;
    }
};