//Leetcode problem 2404
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                mpp[nums[i]]++;
            }
        }
        int i=0;
        int a=0;
        for(auto ch: mpp){
            if(ch.second>i){
                a=ch.first;
                i=ch.second;
            }
            if(mpp[a]==ch.second && ch.first<a){
                a=ch.first;
            }
        }
        if(mpp.empty()) return -1;
        else return a;
    }
};
