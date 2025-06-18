class Solution {
  public:
    string armstrongNumber(int n) {
        int temp=n;
        int res=0;
        while(temp>0){
            int digit=temp%10;
            res+=digit*digit*digit;
            temp=temp/10;
        }
        if(res==n){
            return "true";
        }else{
            return "false";
        }
    }
};
