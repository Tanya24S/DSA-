//Binary search on answer concept
//Here, we just change the criteris through which we check our mid rest remains same, also so far we knew BS is applied on sorted array, here it can be applied on unsorted array as well.
//Peak element (Leetcode 162)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=1;
        int high=nums.size()-1;
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[high]>nums[high-1]) return high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid-1]>nums[mid]){
                high=mid-1;
            }
            else if(nums[mid+1]>nums[mid]){
                low=mid+1;
            }
        }
        return -1;
    }
};
