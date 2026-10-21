#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows:";
	int n; cin >> n;
	string s = "EDCBA";
	for(int i=0;i<n;i++){
		for(int j=i;j>=0;j--){
			cout << s[j%5];
		}
		cout << endl;
	}
}
