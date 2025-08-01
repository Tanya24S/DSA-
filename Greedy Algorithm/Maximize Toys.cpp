//Gfg: https://www.geeksforgeeks.org/problems/maximize-toys0331/1
class Solution {
  public:
    int toyCount(int N, int K, vector<int> arr) {
        sort(arr.begin(), arr.end());
        int i=0;
        int c=0;
        while(K>=arr[i]){
            K=K-arr[i];
            c++;
            if(i<=arr.size()-2){
                i++;
            }
            else{ break;}
        }
        return c;
        
    }
}; 

