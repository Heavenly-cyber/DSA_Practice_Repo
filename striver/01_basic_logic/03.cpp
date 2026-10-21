#include<iostream>
using namespace std;
int main(){
	cout << "Enter the num of row: ";
	int x; cin >> x;
	for (int i=1;i<=x;i++) {
		for(int j=1; j<=i;j++){
			cout << j;
			 if (j==i) cout<< endl;
		}
	//	cout << endl;
	}
} 
