class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map <char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int prev = 0; // Using 0 or handling it cleanly
        
        for (char c : s) {
            int curr = mp[c];
            if (curr > prev) {
                // Subtract what we previously added, plus subtract it again for the rule
                ans += curr - 2 * prev;
            } else {
                ans += curr;
            }
            prev = curr;
        }
        return ans;
    }
};