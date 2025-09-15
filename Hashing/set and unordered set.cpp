//Set and unordered_set in cpp
//SET uses Self balancing binary search tree(red-black tree)
used for storing distant values in ordered/sorted format
(unlike mas dosen't store key value pairs, only keys)
TC: O(log n)

//UNORDERED_SET
the only difference to set is that it is implemented using hash table and it is not sorted
TC:O(1)
Can degrade to O(N) due to ahsh collisions
//Example code:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(auto a: nums){
            mp.insert(a);
        }
        if(mp.size()!=nums.size()) return true;
        else return false;
    }
};
