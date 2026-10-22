//To take the pairs and to display them back using classes and constructor
#include<bits/stdc++.h>
using namespace std;

class Data {
	private: 
		vector<pair<int, int>> v;
		pair<int, int> p;
	public:
    Data(){
		cout << "Enter the number of pairs you wanna save: ";
		int n; cin >> n;
		cout << "Enter all the pairs: ";
		for(int i=0;i<n;i++){
			cin >> p.first >> p.second;
			v.push_back(p);
		}
	}
	void Display(){
			for(int i=0;i<v.size();i++){
				cout << "(" << v[i].first << v[i].second << ")" << " ";
			}
		}
		

};

int main(){
	Data d;

	d.Display();
}

