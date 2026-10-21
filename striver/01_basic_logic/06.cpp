#include<iostream>
using namespace std;
int main(){
	cout << "Enter the number of rows: ";
	int x; cin >> x;
	for(int i=x;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout << j;
		}
		cout << endl;
	}
}
