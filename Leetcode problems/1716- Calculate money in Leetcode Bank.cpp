//Leetcode problem 1716: Calculate money in leetcode bank
//Code 1:
class Solution {
public:
    int totalMoney(int n) {
        int mon=1;
        int total=0;
        while(n!=0){
            total+=mon;
            n--;
            for(int j=mon+1, c=0; c<6 && n>0; j++, c++){
                total+=j;
                n--;
            }
            mon++;
        }
        return total;
    }
};
//Code 2:
