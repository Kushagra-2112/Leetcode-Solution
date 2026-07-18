class Solution {
public:
    bool isPalindrome(int x) {

        if (x<0){
            return false;
        }
        int original = x;
        long long result = 0;
        while(x>0){
            int last_digit = x%10;
            result = result *10 + last_digit;
            x /= 10;
        }
        if (original == result){
            return true;
        }
        return false;
        
    }
};