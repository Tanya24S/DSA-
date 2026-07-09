//Leetcode problem 27: Remove element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        int i=0;
        int c=0;
        while(i<nums.size()){
            if(nums[i]!=val){
                nums[j]=nums[i];
                c++;
                i++;
                j++;
            }
            else if(nums[i]==val){
                i++;
            }
        }
        return c;
    }
};

//Another method:
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> nums2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums2.push_back(nums[i]);
            }
            else{
                continue;
            }
        }
        nums=nums2;
        return nums2.size();
    }
};
