//sqrt return int or float regradless of perfect square
//you an use floor() function to round up a decimal number to two places.
//Method-1
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n=1;
        while(n<=num){
            if(n*n==num){
                return true;
            }
            n++;
        }
        return false;
    }
};
