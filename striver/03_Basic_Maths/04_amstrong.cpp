#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int m=0; int ld,count=0; int dup=n;
        while(dup>0){
            count = count+1;
            dup = dup/10;
        } 
        dup =n;
        while(dup>0){
            ld = dup%10;
            m = m + pow(ld, count);
            dup = dup/10;
        } 
        return m==n;
    }
};

int main(){
	Solution s;
	cout << "Enter your number: ";
	int n; cin >> n;
	if (s.isArmstrong(n)) {
		cout << "It is an Armstrong number";
	}
	else {
		cout << "Not an Armstrong number";
	}
}
