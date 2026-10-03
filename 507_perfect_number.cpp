class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum_divisors = 0;
        // Calculate contribution of every divisor
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0) sum_divisors += i;
        }
        return num == sum_divisors;
    }
};