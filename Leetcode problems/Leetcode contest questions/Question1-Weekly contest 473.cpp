//Problem 3726: Remove zeroes in decimal representation
class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string answer="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                continue;
            }
            else{
                answer+=s[i];
            }
        }
        long long ans=stoll(answer);
        return ans;
    }
};
