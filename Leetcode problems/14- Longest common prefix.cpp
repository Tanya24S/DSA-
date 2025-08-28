//Longest common prefix:14
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(strs.empty()) return "";
        string prefix="";
        for(int i=0; i<strs[0].size(); i++){
            char c=strs[0][i];
            for(int j=1; j<n; j++){
                if(i>=strs[j].size() || strs[j][i]!=c){
                    return prefix;
                }
            }
            prefix+=c;
        }
        return prefix;
    }
};
