#include<iostream>
using namespace std;

int main(){
	int x,y,z,g;
	cout << "Enter all 3 values " <<endl;
	scanf("%d%d%d",&x,&y,&z);
	
	g = x > y ? (x > z ? x:z) : (y > z ? y:z);
	
	cout << "The greatest value is " <<g;
}
