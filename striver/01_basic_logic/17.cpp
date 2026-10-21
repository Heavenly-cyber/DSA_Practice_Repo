#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows you want: ";
	int n; cin >> n;
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=1; i<=n; i++){
		for(int l=1;l<=n-i;l++){
			cout << " ";
		}
		for(int j=1;j<=i;j++){
			cout << s[(j-1)%26];
		}
		for(int k=i-1;k>0;k--){
			cout << s[(k-1)%26];
		}
		cout << endl;
	}
}
