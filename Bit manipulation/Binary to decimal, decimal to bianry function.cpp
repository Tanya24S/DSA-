//Binary to Decimal function code
#include <iostream>
#include <string>
#include <vector>  //extra libraries to be ignored as they are in my ide by default
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    string s="1101";
    int n=0;
    int c=0;
    for(int i=s.size()-1; i>=0; i--){
        n+=(s[i]-'0')*pow(2,c);
        c++;
    }
    cout<<n;
}

//Decimal to Binary function code
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int a=13;
    string s="";
    while(a>1){
        int b=a%2;
        s+=to_string(b);
        a/=2;
    }
    s+=to_string(a);
    reverse(s.begin(), s.end());
    cout<<s;
}
