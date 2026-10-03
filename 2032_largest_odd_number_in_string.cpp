class Solution {
public:
    string largestOddNumber(string num) {
        string max_number = "";
        int last_odd = -1;
        for (int i = num.size() - 1; i >= 0; i--){
            if (num[i] % 2 != 0) {
                last_odd = i;
                break;
            }
        }
        int i = 0;
        while(i <= last_odd){
            max_number.push_back(num[i]);
            i++;
        }
        return max_number;
    }
};