//Leetcode problem 13: Roman to Integer
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mpp;
        mpp={{'I',1}, {'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int decimal=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='I' && s[i+1]=='V' || s[i]=='I' && s[i+1]=='X' || s[i]=='X' && s[i+1]=='L'|| s[i]=='X' && s[i+1]=='C' || s[i]=='C' && s[i+1]=='D'|| s[i]=='C' && s[i+1]=='M'){
                decimal-=mpp[s[i]];
            }
            else{
                decimal+=mpp[s[i]];
            }
        }
        return decimal;
    }
};
