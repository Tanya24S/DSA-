//Question asked in previous visa interview and is an existing question in gfg
//Count number of digits
#include <iostream>
#include <string> 
#include <map>   //These libraries are not required here, these are by default written by me, so that i don't have to rewrite for different codes
#include <vector>
using namespace std;

int main(){
   string s;
   cout<<"Enter a string"<<endl;
   cin>> s;
   int c=0;
   for(char t: s){
       if(isdigit(t)) c++;  //isdigit understanding so basically it checks if it lies within ASCII range for '0' and '9' that is 48 and 57 respt
   }                            //So basically it checks if the ch lies between ch>='0' && ch<='9' this is how isdigit works
   cout<<endl;
   cout<<c;
   return 0;
}
//Count frequency of each digit
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
   string s;
   cout<<"Enter a string"<<endl;
   cin>> s;
   map<char,int> mpp;
   for(char t: s){
       if(isdigit(t)) mpp[t]++;
   }
   cout<<endl;
   for(auto ch: mpp){
       cout<<ch.first<<"->"<<ch.second<<endl;
   }
   return 0;
}
