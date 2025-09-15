//Two sum using hashing
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            int num=target-nums[i];
            if(mpp.find(num)!=mpp.end()){
                return {mpp[num], i};
            }
            else{
                mpp[nums[i]]=i;
            }
        }
        return { -1,-1};
    }
};
//mpp.find(num) → returns iterator pointing to num if found, otherwise returns mpp.end().
//So != mpp.end() means "yes, I found it inside the map
//Example problem to understand the iterator
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  map<int,int> mpp;
  mpp[10] = 5;
  mpp[20] = 6;
  auto it=mpp.find(20);
  cout<<(it->first); //this will give me key and value as output
  cout<<(it->second);
  return 0;
}
