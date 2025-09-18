//Leetcode problem 509
//Fibonacci Number
class Solution {
public:
    int rec(int n, int &answer){
        if(n==0) return 0;
        if(n==1) return 1;
        answer=rec(n-1,answer)+rec(n-2,answer);
        return answer;
    }
    int fib(int n) {
        int answer=0;
        if(n<=1) return n;
        else{
            rec(n, answer);
        }
        return answer;
    }
};
//Optimized using DP
class Solution {
public:
    int rec(int n, int &answer, vector<int> &dp){
        if(n==0) return 0;
        if(n==1) return 1;
        else if(dp[n]!=-1){
            return dp[n];
        }
        answer=rec(n-1,answer,dp)+rec(n-2,answer,dp);
        dp[n]=answer;
        return answer;
    }
    int fib(int n) {
        int answer=0;
        vector<int> dp(n+1,-1);
        if(n<=1) return n;
        else{
            rec(n, answer, dp);
        }
        return answer;
    }
};
