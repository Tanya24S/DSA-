//Print name N-times
//Code:1
#include <iostream>
using namespace std;

int c=0;
void names(string s, int n){
    if(c==n) return;
    cout<<s<<endl;
    c++;
    names(s,n);
}
int main() {
    int n;
    cout<<"How many number of time do tou want to print:";
    cin>>n;
    string s;
    cout<<"Enter the name:";
    cin>>s;
    names(s,n);
}
//Code:2    //Now why code-2 is significantly better is because here it dosen't rely on global variable, so it's not contained within the function making is messier to work with, it is not encouraged to use global avriables during recursion calls to keep the track of calls,
//In the first code though the numebr of calls are contained within the function itself, which makes it easier and cleaner to debug/work with.
#include <iostream>
#include <string>
using namespace std;

void print_names(string s, int n){
    if(n==0) return;
    print_names(s,n-1);
    cout<<s<<endl;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the name:";
    string s;
    cin>>s;
    print_names(s,n);
    return 0;
}
//Print Linearly from 1-N

//Print from N to 1
