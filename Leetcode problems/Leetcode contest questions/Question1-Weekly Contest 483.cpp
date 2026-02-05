class Solution {
public:
    string largestEven(string s) {
        string n=s;
        for(int i=0; i<s.size(); i++){
            if(n.back()=='2'){
                return n;
            }
            else{
                n.pop_back();
            }
        }
        return "";
    }
};
