class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";

        sort(strs.begin(),strs.end());
       string ptr=strs[0];
      string  ptrs=strs[strs.size()-1];
        for(int i=0;i<ptrs.size();i++){
            if(ptr[i]!=ptrs[i]){
                return ans;
            }
            ans+=ptr[i];
        }
        return ans;
    }
};