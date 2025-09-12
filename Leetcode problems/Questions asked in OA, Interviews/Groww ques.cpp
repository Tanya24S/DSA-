//A graph question that I don't remember bcz there was no time left to attempt :(

//Another question, where two types of query given in a matrix form, query 1: in format 1 val d, gotta change array[val] to d, query 2: in format 2 l r where, you need to do sum
//from l to r, no summations should be in the following way: 1* l+ 2* l+1 till mid element then the multiplication number decreases, mid+1 *2 + r *1 (mountain sum)
//output only the sum query
//code:
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> mountainSum(int n, int q, int queries[][3], vector<int> &answer, int arr[]){
    for(int i=0; i<q; i++){
        if(queries[i][0]==1){
            int a=(queries[i][1])-1;
            arr[a]=queries[i][2];
        }
        else if(queries[i][0]==2){
            int k=1;
            int l=(queries[i][1])-1; int r=(queries[i][2])-1;
            int mid=(l+r)/2; //it was mentioned that r-l+1 will always be odd
            int result=0;
            for(int i=l; i<=r; i++){
                if(i<=mid){
                    result+=(arr[i]*k);
                    if(k!=mid) k++;
                }
                else if(i>mid){
                    k--;
                    result+=(arr[i]*k);
                }
            }
            answer.push_back(result);
        }
    }
    return answer;
}
int main(){
    int n;
    cin>>n;
    int q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int queries[q][3];
    for(int i=0; i<q;i++){
        for(int j=0; j<3; j++){
            queries[i][j];
        }
    }
    vector<int> answer;
    mountainSum(n, q, queries, answer, arr);
    for(int i=0; i<answer.size(); i++){
        cout<<answer[i];
    }
    return 0;
}
//Other was linear regression, formulas were given, I just couldn't resolve errors in time :(
//Given number of elements, array in double data type, return answer in decimal points (y=mx+b: m is slope, b is y intercept), 
//x is the day cost you wanna found out of (index out of bound of array elements)
/*Better Understanding: We have an array P of size n (all double), where each element corresponds to a y value, and its index (0,1,2,...,n-1) is the corresponding x.
We need to apply Simple Linear Regression to fit the line y=mx+b    (asked gpt to rephrase my words lol)
and then predict the y value for some given x (which may lie outside the range of the indices).*/
