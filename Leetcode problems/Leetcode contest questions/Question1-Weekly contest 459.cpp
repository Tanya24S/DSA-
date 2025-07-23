//Check divisibility by sum of digit sum and product
class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int product=1;
        int rem;
        while(temp>0){
            rem=temp%10;
            sum+=rem;
            product*=rem;
            temp=temp/10;
        }
        sum=sum+product;
        if(n%sum==0){
            return true;
        }
        else{
            return false;
        }
    }
};
