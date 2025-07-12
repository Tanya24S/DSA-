//Code 1:
class Solution {
public:
    string removeStars(string s) {
        string res="";
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='*'){
                st.push(s[i]);
            }
            else if(s[i]=='*' && !st.empty()){
                st.pop();
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        string a;
        for(int i=res.size()-1; i>=0; i--){
            a+=res[i];
        }
        return a;
    }
};
//Further optimised:
class Solution {
public:
    string removeStars(string s) {
        string res="";
        stack<char>st;
        for(char ch: s){
            if(ch!='*'){
                st.push(ch);
            }
            else if(ch=='*' && !st.empty()){
                st.pop();
            }
        }
        while(!st.empty()){
            res.push_back(st.top());  //instead of concatenation we used push_back
            st.pop();
        }
        reverse(res.begin(), res.end());  //instead of reversing manually we used reversed function
        return res;
    }
};
