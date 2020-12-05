#include<iostream>
#include<string>
using namespace std;

void gambarPola(int n){
	int i, j;  
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (i==1 || i==n || j==1 || j==n){
                cout << " x ";
			}
            else if (i == 3 || i == 8){
				if(j>=3 && j<=8){
					cout << " y ";
				}
				else{       
					cout << "   ";
				}
			}
            else if (i == 4 || i == 7){
				if(j==3 || j==8){
					cout << " y ";
				}
				else{       
					cout << "   ";
				}
			}
            else if (i == 5 || i == 6){
				if(j==3 || j==8){
					cout << " y ";
				}
				else if(j==5 || j==6){
					cout << " z ";
				}
				else{       
					cout << "   ";
				}
			}
            else{       
                cout << "   ";
			}
        }  
        cout << "\n";  
    }  
}

int main(){
	gambarPola(10);
}