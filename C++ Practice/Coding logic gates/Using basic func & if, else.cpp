#include <iostream>
#include <string>
using namespace std;

bool andgate(bool a,bool b){
    if(a==true && b==true){
        return true;
    }
    else{ return false;}
}
bool nandgate(bool a,bool b){
    if(a==true && b==true){
        return false;
    }
    else{ return true;}
}
bool orgate(bool a,bool b){
    if(a==false && b==false){
        return false;
    }
    else{ return true;}
}
bool norgate(bool a,bool b){
    if(a==false && b==false){
        return true;
    }
    else{ return false;}
}
bool xnorgate(bool a,bool b){
    if((a==true && b==true) || (a==false && b==false)){
        return true;
    }
    else{ return false;}
}
bool xorgate(bool a,bool b){
    if((a==true && b==true) || (a==false && b==false)){
        return false;
    }
    else{ return true;}
}

int main(){
    bool a;
    cout<<"Enter the first input:";
    cin>>a;
    bool b;
    cout<<"Enter the second input:";
    cin>>b;
    string type;
    cout<<"Enter the type of gate being used:";
    cin>>type;
    if(type=="and" || "AND"){
        cout<<andgate(a,b);
    }
    if(type=="nand" || "NAND"){
        cout<<nandgate(a,b);
    }
    if(type=="or" || "OR"){
        cout<<orgate(a,b);
    }
    if(type=="nor" || "NOR"){
        cout<<norgate(a,b);
    }
    if(type=="xor" || "XOR"){
        cout<<xorgate(a,b);
    }
    if(type=="xnor" || "XNOR"){
        cout<<xnorgate(a,b);
    }
    return 0;
}
