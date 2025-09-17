//Leetcode Problem 509: Fibonacci Number
//Code 1:
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
        rec(n, answer);
        if(n==1) return 1;
        else return answer;
    }
};

