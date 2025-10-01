//Code 1:
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
    }
};
//Code 2:
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> check(27);
        for(int i=0; i<s.size(); i++){
            check[s[i]-'a']++;
            check[t[i]-'a']--;
        }
        for(int i=0; i<27; i++){
            if(check[i]!=0) return false;
        }
        return true;
    }
};
