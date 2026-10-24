class Solution {
public:
    int GCD(int n1,int n2) {
        int d;
        if(n1>n2) d = n2;
        else d = n1;
        for(int i=d;i>=1;i--){
            if((n1%i == 0) && (n2%i==0)){
                return i;
            }
        }
    }
};
