class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()) return -1;

       string sr="";
       int i = 0; int j = 0;
       while(j<haystack.size()){
           sr +=haystack[j];
           if(sr.size()<needle.size()){
               j++;
           }
           else if(sr.size()==needle.size()){
               if(sr==needle){
                   return i;
               }
               else{
                   sr.erase(sr.begin());
                    i++;
                    j++;
               }
           }
       } 
       return -1;
    }
};