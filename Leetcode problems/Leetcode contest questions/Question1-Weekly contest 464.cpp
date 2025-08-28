//Find gcd/hcf of first n odd numbers sum and even numbers sum
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;
        int i=2;
        int j=1;
        int c=0;
        while(c<n){
            sumEven+=i;
            i+=2;
            c++;
        }
        c=0;
        while(c<n){
            sumOdd+=j;
            c++;
            j+=2;
        }
        int result;
        while(sumOdd!=0){
            result=sumOdd;
            sumOdd=sumEven%sumOdd;
            sumEven=result;
        }
        return result;
    }
};
