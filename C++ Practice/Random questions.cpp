//1.Is rectangle?
int Solution::solve(int A, int B, int C, int D) {
    if(A==B&C==D||A==C&B==D||A==D&B==C){
        return 1;
    }else{
        return 0;
    }
}
//2.
