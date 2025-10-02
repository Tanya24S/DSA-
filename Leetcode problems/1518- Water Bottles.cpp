//Code 1:
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count_remain=0;
        int extra=0;
        int total_drunk=numBottles;
        extra=numBottles/numExchange;
        count_remain=numBottles-(numExchange*extra);
        count_remain+=extra;
        int new_extra=0;
        while(count_remain>=numExchange){
            new_extra=(count_remain/numExchange);
            extra+=new_extra;
            count_remain=count_remain-(numExchange*new_extra);
            count_remain+=new_extra;
        }
        total_drunk+=extra;
        return total_drunk;
    }
};
