#include<iostream>
using namespace std;

int main(){
	int arr[3];
	cout << "Enter the values " << endl;
	int i;
	for(i=0;i<3;i++){
		cin >> arr[i];
	}
	
	int large;
	large = arr[0];
	
	for(i=1; i<3; i++){
		if(large < arr[i]){
			large =  arr[i];
		}
	}
	
	int small;
	small  = arr[0];
	
	for(i=1;i<3;i++){
		if(small > arr[i]){
			small = arr[i];
		}
	}
	
	int middle;
	
	for(i=0; i<3; i++){
		
		if(large != arr[i]){
			
			if(small != arr[i]){
				
				middle = arr[i];
			}
		}
	}
	
	cout << "middle value is " << middle <<endl;
	
}
