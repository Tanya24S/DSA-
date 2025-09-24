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
