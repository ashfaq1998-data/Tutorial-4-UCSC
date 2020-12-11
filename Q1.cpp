#include<iostream>
using namespace std;

int main(){
	int x;
	cout << "Please enter the value" << endl;
	cin >> x;
	
	if(x > 0){
		cout << "The absolute value is " << x;
	}else{
		int y;
		y = -1 * x;
		cout << "The absolute value is " << y;
	}
}
