class Solution {
public:
    bool isPalindrome(int n) {
        string s = to_string(n);
        string rev = s;
        reverse(rev.begin(),rev.end());
        return rev == s;
    }
};
