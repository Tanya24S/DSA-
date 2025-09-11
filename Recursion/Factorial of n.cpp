//Factorial of given number n
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int rec(int n, int &sum){
    if(n==0){
        return 1;
    }
    sum = n * rec(n-1, sum);
    return sum;
}
int main(){
    int n;
    cout<< "Enter the number:";
    cin>>n;
    int sum=0;
    rec(n, sum);
    cout<<sum;
}
