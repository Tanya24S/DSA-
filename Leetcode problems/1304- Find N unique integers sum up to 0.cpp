//1304- Find N unique integers sum up to zero
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        int i=n-1;
        int sum=0;
        while(i>0){
            result.push_back(i);
            n-=i;
            sum+=i;
            i--;
        }
        int h=-sum;
        result.push_back(h);
        return result;
    }
};
