//Leetcode problem 231: Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long check=1;
        bool ifpower=false;
        while(check<=n){
            if(check==n){
                return true;
            }
            else{
                check*=2;
            }
        }
        return false;
    }
};
//Optimized approach using & operator:
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        else if((n&(n-1))==0) return true;
        else return false;
    }
};
