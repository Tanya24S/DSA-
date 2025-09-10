//There were mcqs, a lot of them involved hash function, and only one coding question
//DSA question: You are supposed to return a vector. Given a string with characters L and R is given and there is a line sequence that will be in range from 0 to 2^n.
//With each iteration i through the string indicies, the range will become half either from LHS or RHS depending on the character. You need to output all the centers until
//range becomes negligible and return the iteration through which we got this mid in ascending order of mids. Eg: "LRLRLL" then range will be [0,2^6]
//Approach: My approach was to make a vector of pairs and then sort first values and return push second values in vector and return
//another thing that i believe could be done was make a map and later after sorting push_back second values into a vector and then return it :(

//Code:
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> sequence(string s, vector<int> &result){
    vector<pair<int,int>> answer;  //vector of pairs
    int n=s.size();
    int range=pow(2,n);
    int i=0;
    for(int a=0; a<n; a++){
        if(s[a]=='L'){
            int mid=(i+range)/2;
            range=mid;
            answer.push_back({mid, a});  //push_back values like this in vector of pairs
        }
        else if(s[i]=='R'){
            int mid=(i+range)/2;
            answer.push_back({mid, a});
            i=mid;
        }
    }
    for (auto &p : answer) {       //to output vector of pairs
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    sort(answer.begin(),answer.end()); //sort by first value
    for(auto &p:answer){
        result.push_back(p.second);  //to push_back only second value of pairs in new vector
    }
    return result;
}
void output(string s){
    vector<int> result;
    sequence(s,result);
    for(int i=0; i<result.size();i++){
        cout<<result[i]<<" ";
    }
}
int main(){
    string s;
    cin>>s;
    output(s);
    return 0;
}
