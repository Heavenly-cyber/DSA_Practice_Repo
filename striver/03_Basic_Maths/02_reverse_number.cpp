class Solution {
public:
    int reverseNumber(int n) {
        int m=0;
        while(n>0){
            m = m*10 + n%10;
            n = n/10;
        }
        return m;
    }
};
