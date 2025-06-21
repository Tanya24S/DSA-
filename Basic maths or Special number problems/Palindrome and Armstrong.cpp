//Palindrome- The number/string when reversed is the exact same as the original one.
//Armstrong number- The number which is equal to the sum of the cube of it's digits.

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

//Armstrong number-Leetcode problem 1134
class Solution {
  public:
    string armstrongNumber(int n) {
        int temp=n;
        int res=0;
        while(temp>0){
            int digit=temp%10;
            res+=digit*digit*digit;
            temp=temp/10;
        }
        if(res==n){
            return "true";
        }else{
            return "false";
        }
    }
};
