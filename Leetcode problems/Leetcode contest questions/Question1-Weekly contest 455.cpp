//Q1) Check if any element has prime frequency
class Solution {
public:
    bool isprime(int a){
        if(a==1) return false;
        if(a>2){
            for(int i=2; i<=sqrt(a); i++){
                if(a%i==0){
                    return false;
                }
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int>mp;
        for(int e: nums){
            mp[e]++;
        }
        for(auto& entry: mp){
           int value=entry.second;
            if(isprime(value)){
                return true;
            }
        }
        return false;
    }
};
