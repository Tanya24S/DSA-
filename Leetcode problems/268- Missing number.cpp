//268-Missing Number
//Code 1: brute force
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int check=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=check) return check;
            else check++;
        }
        return n;
    }
};
//Code 2: optimized code (but uses extra space)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> check(n+1,0);
        for(int i=0; i<n; i++){
            check[nums[i]]++;
        }
        for(int i=0; i<check.size(); i++){
            if(check[i]!=1) return i;
        }
        return -1;
    }
};
//Code 3: more optimized uses no extra space (XOE implementation)
