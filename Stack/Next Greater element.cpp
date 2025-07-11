//Find Nearest greater to right (brute force: O(N^2) loop, Optimised: we will do using stack)
//https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
//We try to understand it using edge test case that is (6,5,4,3,7)
//Algo: Insert each element if last>current, if current<last, pop and keep poping until all other smaller numbers removed 
//otherwise restack the current with others, after loop ends, remaining updated with -1
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n=arr.size();
        vector<int> res(n);
        stack<int> st;
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(i);
            }
            else{
                if(arr[st.top()]>arr[i]){
                    st.push(i);
                }
                else{
                    while(!st.empty() && arr[st.top()]<arr[i]){
                        res[st.top()]=arr[i];
                        st.pop();
                    }
                    st.push(i);
                }
            }
        }
        while(!st.empty()){
            res[st.top()]=-1;
            st.pop();
        }
        return res;
    }
}; //while(arr[st.top()]<arr[i] && !st.empty()) Now even though here I think that I am taking into account if the stack is 
  //empty or not it will still give me a segmentation error because I am looking out for st.top() before checking if it's empty

//Leetcode: https://leetcode.com/problems/next-greater-element-i/description/
