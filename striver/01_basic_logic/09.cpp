#include<iostream>
using namespace std;
int main(){
	cout << "Enter the num of Rows: ";
	int x; cin >> x;
	for (int i=0;i<x;i++){
		for(int j=x-i-1;j>0;j--){
			cout << " ";
		}
		for(int k=1;k<=2*i+1;k++){
						cout << "*";
					}
		cout << endl;
	}

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
