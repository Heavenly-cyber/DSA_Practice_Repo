#include<iostream>
using namespace std;
int main(){
	cout << "Enter the digit you wanna start with: ";
	int n; cin >> n;
	int noc = 0; int num;
	for(int i=1; i<=2*n-1; i++){
	    num = n;
	    cout << noc << " ";
		for(int j=1; j<=2*n-1; j++){
			cout << num;
			if(j<n){
				if(j<=noc){
						num--;
				  	} 	
	    		}			
			else{
				if(2*n-1-j<=noc){
					num++;}
					}
			}
			cout << endl;
				if(i<n){
		        	noc++;}
			    if(i>=n){
			noc--;}
		}
}
