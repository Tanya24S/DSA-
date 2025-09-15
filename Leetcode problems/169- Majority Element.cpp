//Leetcode problem 169: Majority element
//First approach: nested loop count elements using that
//Second:
class Solution {
public:
int majorityElement(vector<int>& a) {
        int n=a.size();
        int x=n/2;
        map<int,int>mp;
        for(int e:a){
            mp[e]++;
            if(mp[e]>x)return e;
        }
        return -1;
    }
};
