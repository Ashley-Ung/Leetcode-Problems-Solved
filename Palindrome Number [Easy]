Question: Palindrome Number [Easy]
Given an integer x, return true if x is palindrome integer. 
An integer is a palindrome when it reads the same backward as 
forward.


Answer:
class Solution {
public:
    bool isPalindrome(int x) {
        bool bIsTrue = true;
        int revert = 0;
        
        // negetive numbers are not palindromes 
        if (x < 0 || ((x % 10 == 0 && x != 0))) {
            return bIsTrue = false; 
        }
             
        // need to revert the last half of the numbers and compare to the first half 
        while (x > revert) {
            revert = revert * 10 + x % 10;
            x /= 10;
        }
        
        return x == revert || x == revert/10; 
    }
};
