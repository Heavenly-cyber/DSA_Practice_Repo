#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows: ";
	int n; cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout << "*";
		}
		for(int k=1;k<=2*i-2;k++){
			cout << " ";
		}
		for(int j=n;j>=i;j--){
			cout << "*";
		}
		cout << endl;
	}

	for(int i=0;i<n;i++){
		for(int j=1;j<=i+1;j++){
			cout << "*";
		}
		for(int k=1;k<=2*(n-i)-2;k++){
			cout << " ";
		}
		for(int j=1;j<=i+1;j++){
			cout << "*";
		}
		cout << endl;
	}
}
	
