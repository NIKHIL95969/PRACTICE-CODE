#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = 0;
        string str = "";
        int i =0;

        while(i<s.size()){
            auto isFound = str.find(s[i]);

            if(isFound!=string::npos){
                int str_sz = str.size();
                sz = max(sz,str_sz);
                str.erase(str.begin(),str.begin()+isFound+1);
                str += s[i++];
            }
            else{
                str += s[i++]; 
            }
        }
        int str_sz = str.size();
        sz = max(sz,str_sz);
        return sz;
    }
};