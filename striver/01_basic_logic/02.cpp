#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows: ";
	int x; cin >> x;
	for(int i=0;i<x;i++){
		for(int j=0;j<=i;j++){
			cout << "*";
			if (j==i) cout << endl;
		}
		// cout << endl;
	}
}
