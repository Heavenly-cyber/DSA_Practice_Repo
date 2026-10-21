#include<iostream>
using namespace std;

int main() {
	cout << "Enter the number of size of the pattern: ";
	int x; cin >> x;
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			cout << "*";
			if (j == x-1) cout << endl;
		}
	}
	
}
