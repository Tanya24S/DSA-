//Sort 0's, 1's and 2's, Dutch National flag problem
//Brute-Using sorting algorithm
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
//Optimal-Dutch Flag algorithm, playing with three pointers(low,mid,high)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
