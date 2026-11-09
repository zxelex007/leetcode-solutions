class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 1;
        string ans;
        for (int i = 1;i < s.size();i++){
            if (cnt != 0){
                if (s[i] == 40){
                    ans.push_back(s[i]); 
                    cnt ++;
                }
                else{
                    cnt --;
                    if (cnt != 0) ans.push_back(s[i]);
                }
            }
            else{
                cnt ++;
            }
            
        }
        return ans;
    }
};