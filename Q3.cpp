#include<iostream>
using namespace std;

int main(){
	int arr[3];
	cout << "Please enter all three numbers " <<endl;
	int i;
	for(i=0;i<3;i++){
		cin >> arr[i] ;
	}
	
	int large = arr[0];

	
	for(i=1;i<3;i++){
		if(large < arr[i]){
			large = arr[i];
		}
	}
	
	cout << "The largest value is "<< large << endl;
	

	
	
	
}
