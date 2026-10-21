#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows: ";
	int n; cin >> n;
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout << s[j%26] ;
		}
		cout << endl;
	}
}
