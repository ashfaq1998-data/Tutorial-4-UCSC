#include<iostream>
using namespace std;

int main(){
	int x;
	cout << "Enter the temperature " << endl;
	cin >> x;
	
	if(x > 50){
		cout << "Invalid choice" <<endl;
	}
	else{
		if(x < 30){
			cout << "Wear the down jacket 1" <<endl;
		}else{
			cout << "No need to worry about the jacket" <<endl;
		}
	}
}
