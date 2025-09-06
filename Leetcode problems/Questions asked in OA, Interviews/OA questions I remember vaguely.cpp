//Ques 1: The question was something like I was given an array of integers and i need to check if they are monotonic as i, i+1, i+2 either increasing or decreasing and return a
//array/vector with 0 and 1 if it was not or was respectively.
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

vector<int> check_monotonic(vector<int> arr, vector<int> &result){
    if(arr.size()<3){
        return {0};
    }
    for(int i=0; i<arr.size()-2; i++){
        if(((arr[i]<arr[i+1]) && (arr[i+1]<arr[i+2])) || ((arr[i]>arr[i+1]) && (arr[i+1]>arr[i+2]))){
            result.push_back(1);
        }
        else result.push_back(0);
    }
    return result;
}
int main(){
    vector<int> arr={10, 11, 4, 5, 8};
    vector<int> result;
    check_monotonic(arr, result);
    for(int i=0; i<result.size(); i++){  //the compiler is giving me a warning though even if the code is running fine because of unsigned and int comparison.
        cout<<result[i]<<" ";
    }
    return 0;
}
//Ques2: I was given array with stick lengths bird trying to make nest and we are supposed to collect sticks from left or right until the length of nest reaches atleast 100 
//and return sticks chosen.
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>


using namespace std;

vector<int> sticks_collected(vector<int> arr, vector<int> &result, int position){
    int length=0;
    while(length<100){
        for(int i=position; i<arr.size(); i++){
            if(arr[i]!=0){
                length+=arr[i];
                arr[i]=0;
                result.push_back(i);
                break;
            }
        }
        if(length<100){
            for(int i=position; i>=0; i--){
                if(arr[i]!=0){
                    length+=arr[i];
                    arr[i]=0;
                    result.push_back(i);
                    break;
                }
            }
        }
    }
    return result;
}
//Ques3: Also, I was allowed to write a soltuion with tc O(n^2)
//Here i was given a matrix with 0,1,2 possible digits, and need to make a y shape with only one digit, while rest of the background digits should be same and different from
//the one used in y combination, i need to tell minimum number of changes required to reach this result.
//Very brute force:
int matrix_change(vector<vector<int>> protein, vector<vector<bool>> &visited, int &min_changes){
    int a=0; int b=0;
    int n = protein.size();
    int c=0; int d=protein.size()-1;
    int count_one=0; int count_two=0; int count_zero=0;
    while(a <= c && b <= d){
        if(protein[a][b]==0) count_zero++;
        else if(protein[a][b]==1) count_one++;
        else if(protein[a][b]==2) count_two++;
        visited[a][b]=true;
        a++, b++;
        if(protein[c][d]==0) count_zero++;
        else if(protein[c][d]==1) count_one++;
        else if(protein[c][d]==2) count_two++;
        visited[c][d]=true;
        c++, d--;
    }
    int center = protein.size()/2;
    int g=center;
    while(g<protein.size()){
        if(protein[g][center]==0) count_zero++;
        else if(protein[g][center]==1) count_one++;
        else if(protein[g][center]==2) count_two++;
        visited[g][center]=true;
        g++;
    }
    int y=-1;
    if(count_zero>count_one && count_zero>count_two){
        min_changes=count_one+count_two;
        y=0;
    }
    else if(count_one>count_zero && count_one>count_two){ 
        min_changes=count_zero+count_two;
        y=1;
    }
    else if(count_two>count_one && count_two>count_zero){
        min_changes=count_one+count_zero;
        y=2;
    }
    count_one = 0;
    count_two = 0;
    count_zero = 0;
    for(int i=0; i<protein.size(); i++){
        for(int j=0; j<protein.size(); j++){
            if(visited[i][j]!=true){
                if(protein[i][j]==0) count_zero++;
                else if(protein[i][j]==1) count_one++;
                else if(protein[i][j]==2) count_two++;
            }
        }
    }
    if(y!=0 && count_zero>=count_one && count_zero>=count_two) min_changes+=count_one+count_two;
    else if(y!=1 && count_one>=count_zero && count_one>=count_two) min_changes+=count_zero+count_two;
    else if(y!=2 && count_two>=count_one && count_two>=count_zero) min_changes+=count_one+count_zero;
    return min_changes;
}
//Much better code:

//Ques 4:
