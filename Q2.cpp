#include<iostream>
using namespace std;

int main(){
	int x;
	cout << "Enter the number " << endl;
	cin >> x;
	
	if(x % 2 == 0){
		cout << x << " is a even number" << endl;
	}
	else{
		cout << x << " is a odd number" << endl;
	}
}
