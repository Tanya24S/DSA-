//leetcode problem 88: Merge two sorted array
//Code 1:
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.insert(nums1.begin()+m,nums2.begin(), nums2.end());
        nums1.erase(nums1.begin()+(n+m), nums1.end());
        sort(nums1.begin(),nums1.end());
    }
};
//Code 2:
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m;
        for(int j=0; j<n; j++){
            nums1[i]=nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
