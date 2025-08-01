//Optimized code:









//Most brute force code where I tried handling all the edge cases manually and hard coded it, worked for only 13 test cases but worth the brain storm :o
class Solution {
public:
    string nearestPalindromic(string n) {
        string ans1 = n;
        int a = n.size();
        int num1 = stoi(n);
        int num2=stoi(n);
        int num = stoi(n);
        
        if (a == 0) {
            n = "1";
            return n;
        }
        if (a == 1) {
            num = num - 1;
            n = to_string(num);
            return n;
        }
        if(a==2){
            while(num2%10==1){
                num2/=10;
            }
            if(num2==0){
                num=9;
                n=to_string(num);
                return n;
            }
        }
        if (a >= 2) {
            while (num1 % 10 == 0) {
                num1 /= 10;
            }
            if (num1 == 1) {
                num = num - 1;
                n = to_string(num);
                return n;
            }
        }

        if (a >= 2) {
            if (a % 2 == 0) {
                for (int i = a - 1, j = 0; j <= (a / 2) - 1; i--, j++) {
                    ans1[i] = ans1[j];
                }

                string h = ans1;
                int num2 = h[a / 2] - '0';
                num2 = num2 - 1;
                h[a / 2] = (num2 + '0');
                h[(a / 2) - 1] = (num2 + '0');

                if (abs(stoi(n) - stoi(ans1)) > abs(stoi(n) - stoi(h)))
                    return h;
                else
                    return ans1;
            } else {
                for (int i = a - 1, j = 0; j <= ((a - 1) / 2); i--, j++) {
                    ans1[i] = ans1[j];
                }

                string h = ans1;
                int num2 = h[(a - ((a - 1) / 2)) - 2] - '0';
                num2 = num2 + 1;
                h[(a - ((a - 1) / 2)) - 2] = (num2 + '0');

                if (abs(stoi(n) - stoi(ans1)) > abs(stoi(n) - stoi(h)))
                    return h;
                else
                    return ans1;
            }
        }

        return n;
    }
};
