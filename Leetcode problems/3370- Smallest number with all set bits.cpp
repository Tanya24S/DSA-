//Leetcode problem 3370: Smallest number with all set bits
//Code:
class Solution {
public:
    int smallestNumber(int n) {
        string binary="";
        while(n!=0){
            binary+=(n%2);
            n=n/2;
        }
        int num=0;
        for(int i=0; i<binary.size(); i++){
            if(binary[i]==0){
                binary[i]=1;
            }
            num+=(binary[i]*(pow(2,i)));
        }
        return num;
    }
};
