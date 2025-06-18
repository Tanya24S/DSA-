//Palindrome(Integers)-Leetcode problem 9
class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long res=0;
        while(temp>0){
            int digit=temp%10;
            res=res*10+digit;
            temp=temp/10;
        }
        if(res==x){
            return true;
        }else{
            return false;
        }
    }
};
