//1.Is rectangle?
int Solution::solve(int A, int B, int C, int D) {
    if(A==B&C==D||A==C&B==D||A==D&B==C){
        return 1;
    }else{
        return 0;
    }
}
//2. Sum of first n numbers(without formula)
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int c=0;
    int a=0;
    for(int i=1; i<=n; i++){
        c++;
        a+=c;
    }
    cout<<a;
}//Instead of doing this I can just sum using i  as a+=i;
//Using formula return (n*(n+1))/2
//So I got to know that formula for first n natural numbers is called Gauss's formula



