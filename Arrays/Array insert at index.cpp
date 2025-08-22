//You are given an array arr(0-based index) and two positive integer index and val. You need to insert an val at given index.
class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        int n=arr.size();
        arr.push_back(0);
        for(int i=n; i>index; i--){
            arr[i]=arr[i-1];
        }
        arr[index]=val;
    }
};
