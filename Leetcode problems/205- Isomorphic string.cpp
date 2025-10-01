//Code 1: using two unordered_map
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if((s.size()<t.size()) || (s.size()>t.size())) return false;
        unordered_map<char,char> mpp;
        unordered_map<char,char> mpp2;
        int i=0; int j=0;
        while(i<s.size()){
            if(mpp.find(s[i])!=mpp.end()){
                if(mpp[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                mpp[s[i]]=t[i];
            }
            if(mpp2.find(t[i])!=mpp2.end()){
                if(mpp2[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                mpp2[t[i]]=s[i];
            }
            i++;
            j++;
        }
        return true;
    }
};
