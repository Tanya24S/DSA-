//using array of strings and range
#include <iostream>
using namespace tsd;

int main(){
  int a,b;
  cin>>a>>b;
  string words[]={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; //you don't have to define number in brackts, you can define ase bhi
  for(int i=a; i<=b; i++){
    if(i>=1 && i<=9){
      cout<<words[i];
    }
    else{
      if(i%2==0) cout<<"even"l
      else cout<<"odd";
    }
    return 0;
}
// Using pointers
void pointerstuff(int* p, int* c, int a, int b){
    *p=a+b;
    *c=abs(a-b);
}

int main() {
    int a,b;
    cin>>a>>b;
    int* p=&a;
    int* c=&b;
    pointerstuff(p, c, a, b);
    cout<<a<<endl;
    cout<<b;
    return 0;
}
