//Leetcode problem: 3582 Generate tag for video caption
class Solution {
public:
    string generateTag(string caption) {
        caption+=' ';
        string ans="#";
        string word= "";
        int i=0; int n=caption.size();
        for(char c: caption){
            if(c!=' '){
                word+=tolower(c);
            }
            else{
                word[0]=toupper(word[0]);
                ans+=word;
                word="";
            }
        }
        ans[1]=tolower(ans[1]);
        ans=ans.substr(0,100);
        return ans;
    }
};
