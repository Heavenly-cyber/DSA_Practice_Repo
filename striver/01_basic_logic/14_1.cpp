#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int asci = (int) 'A';
	cout << (int) 'Z' << endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			cout << (char) (asci + j%26);
		}
		cout << endl;
	}
}
