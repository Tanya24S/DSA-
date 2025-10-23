//Leetcode problem 3461
//Code:
class Solution {
public:
    bool hasSameDigits(string s) {
        string res="";
        while(s.size()!=2){
            res="";
            for(int i=0, j=1; j<s.size() && i<s.size()-1; i++, j++){
                res+=((s[i]-'0')+(s[j]-'0'))%10;
            }
            s=res;
        }
        if(s[0]==s[1]) return true;
        else return false;
    }
};
