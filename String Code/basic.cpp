#include<bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine) {
        // if((ransomNote.size())!=(magazine.size()))
        // {
        //     return false;
        // }
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(), magazine.end());
        if(magazine==ransomNote){
            return true;
        }
        int hsh[26] = {0};
        int hsh2[26] = {0};
        for(int i=0; i<magazine.size(); i++){
            hsh[magazine[i]-'a']++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            hsh2[ransomNote[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            cout << hsh2[i] << " " << hsh[i] <<endl;
        }
        for(int i=0; i<26; i++){
            cout << hsh2[i] << " " << hsh[i] <<endl;
            if(hsh2[i]>hsh[i]){
                return false;
            }
        }
        
        return true;
    }
int main(){   
    string ransomNote ="aba" ;
    string magazine =" azcab";
    canConstruct(ransomNote, magazine);
    cout << "done";
    return 0;
}