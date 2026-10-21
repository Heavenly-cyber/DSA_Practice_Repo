#include<iostream>
using namespace std;
int main(){
	cout << "enter the number of row: ";
	int x; cin >> x;
	for (int i=x;i>=1;i--){
		for (int j=1;j<=i;j++){
			cout << "*";
			// if (j==i) cout << endl;
		}
		cout << endl;
	}
}
