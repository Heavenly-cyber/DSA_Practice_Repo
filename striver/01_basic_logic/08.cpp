#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows: ";
	int x; cin >> x;
	for(int i=0;i<x;i++){
		for(int j=0;j<=i-1;j++){
			cout << " ";
		}
		for(int k=2*(x-i)-1;k>=1;k--){
			cout << "*";
		}
		cout << endl;
	}
}
