class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for (int i = 0;i < s.size();i++){
            if (s[i] >= 65 && s[i] <= 90){
                v.push_back(s[i] + 32);
            }
            if (s[i] >= 97 && s[i] <= 122){
                v.push_back(s[i]);
            }
            if (s[i] >= 48 && s[i] <= 57){
                v.push_back(s[i]);
            }
        }
        for (int i = 0;i < v.size();i++){
            if (v[i] != v[v.size() - i - 1]) return false;
        }
        return true;
    }
};