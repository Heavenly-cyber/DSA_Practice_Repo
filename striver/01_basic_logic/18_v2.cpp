#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows: ";
	int n; cin >> n;
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=1;i<=n;i++){
		for(int j=n-i+1;j<=n;j++){
			cout << s[(j-1)%26];
		}
		cout << endl;
	}
}
