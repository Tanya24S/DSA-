//https://www.geeksforgeeks.org/problems/binary-search-1587115620/1
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int l=0;
        int h=arr.size()-1;
        int answer=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==k){
                answer=mid;
                h=mid-1;
            }
            else if(arr[mid]<k){
                l=mid+1;
            }
            else if(arr[mid]>k){
                h=mid-1;
            }
        }
        return answer;
    }
};
