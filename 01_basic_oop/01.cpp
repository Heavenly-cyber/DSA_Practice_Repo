#include<iostream>
#include<vector>
using namespace std;

//Task1: Take 2D vector
//Task2: Display 2D vector
//Task3: Do 1D sum
//Task4: Display 1D sum
//Task5: Whole sum display
class Vector2D {
  private:
    vector< vector<int> > vec;
    vector<int> Vsum;
  public:
    Vector2D(){ //ask for the 2D vector from the user //constructor
      cout << "Enter the dimension of the 2D vector (x,y):" << endl;
      int x,y; cin >> x >> y;
      cout << "Enter your 2D vector";
      for(int i=0; i < x; i++){
        vector<int> v;
        for(int j=0; j<y; j++){
         int n; cin >> n;
          v.push_back(n);
        }
        vec.push_back(v);
      }
    }

    void display() {
      cout << "[";
      for (int i=0; i< vec.size();i++ ){
        cout << "[";
        for (int j=0;j<vec[i].size();j++ ){
          cout << vec[i][j];
          if (j != vec[i].size()-1) cout << ",";
          else cout << "]" << endl;
        }
      }
      cout << "]" << endl;
    }

    int eachsum(vector<int> vv) {
      int sum =0;
      for (int i : vv) sum += i;
      return sum;
    }

    void OneDSum(){
      if (Vsum.empty()){
        for(int i=0;i < vec.size(); i++){
          Vsum.push_back(eachsum(vec[i]));
        }
      }
    }

    void OneDdisplay(){
      OneDSum();
      cout << "[";
      for(int i=0; i< Vsum.size(); i++){
      cout << Vsum[i];
      if (i == Vsum.size()-1) cout << "]" << endl;
      else cout << ", ";
      }
    }

    int TotalSum(){
      OneDSum();
      return eachsum(Vsum);
    }

};

  void Options() {
    cout << "1. Enter 2D vector" << endl;
    cout << "2. Display all 2D vectors"<< endl;
    cout << "3. Sum of all 2D vectors" << endl;
    cout << "4. Display 1D sum" << endl;
    cout << "5. Display Total sum"<< endl;
    cout << "6. Show all the options"<< endl;
    cout << "7. exit"<< endl;
  }

  int main() {
    vector<Vector2D> vec;
    bool exit = false;
    Options();
    while (true){
      cout << "Enter your option: " ;
      int x; cin >> x;
      switch(x){
        case 1: {
            Vector2D v;
            vec.push_back(v);
            break;
          }
        case 2: {
            cout << "[" << endl;
            for (int i=0;i < vec.size(); i++){
            vec[i].display();
          }
          cout << "]" << endl;
          break;
          }
          
        case 3: {
            cout << "Choose the position of vector for 1D sum: ";
            int i; cin >> i;
            vec[i].OneDSum();
            break;
          }

       case 4: {
           cout << "Choose the position of vector for displaying 1D sum: ";
           int i; cin >> i;
           vec[i].OneDdisplay();
           break;
         }

      case 5: {
           cout << "Choose the position of vector for displaying Total sum:";
           int i; cin >> i;
           cout << vec[i].TotalSum();
           break;
        }

     case 6: {
     	  Options();
     	  break;
     }

     case 7: {
     	 exit = true;
     	 break;
     }

     default: {
     	cout << "No valid option entered" ;
     }
     
    }
    if (exit) break;
    }
  }
