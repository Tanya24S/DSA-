//Sort 0's, 1's and 2's
//Brute-USing sorting algorithm
//Better solution-using three varibles to count each and then replace manually
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num1=0;
        int num2=0;
        int num3=0;
        for(int i=0; i<=nums.size()-1;i++){
            if(nums[i]==0){
                num1++;
            }
            if(nums[i]==1){
                num2++;
            }
            if(nums[i]==2){
                num3++;
            }
        }
        for(int i=0; i<num1; i++){
            nums[i]=0;
        }
        for(int i=num1; i<(num1+num2); i++){
            nums[i]=1;
        }
        for(int i=(num1+num2); i<(num1+num2+num3); i++){
            nums[i]=2;
        }
    }
};
//Optimal-Dutch Flag algorithm
