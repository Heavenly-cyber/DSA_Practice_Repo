#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i=1;i<=2*n-1;i++){
		cout << "*";
	}
	cout << endl;
	for(int i=1;i<=n-1;i++){
		for(int j=n-1;j>=i;j--){
			cout << "*";
		}
		for(int k=1;k<=2*i-1;k++){
			cout << " ";
		}
		for(int l=n-1;l>=i;l--){
			cout << "*";
		}
		cout << endl;
	}

	for(int i=0;i<n-1;i++){
		for(int j=1;j<=i+1;j++){
			cout << "*";
		}
		for(int k=1;k<=2*((n-1)-i)-1;k++){
			cout << " ";
		}
		for(int j=1;j<=i+1;j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i=1;i<=2*n-1;i++){
			cout << "*";
		}
}
