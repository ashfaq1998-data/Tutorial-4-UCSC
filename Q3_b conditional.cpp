#include<iostream>
using namespace std;

int main(){
	int x,y,z,m;
	cout << "Enter all 3 values " <<endl;
	scanf("%d%d%d",&x,&y,&z);
	
	m = x > y ? (z > x? x:(y>z? y:z)) : (z>y ? y: (x>z? x:z));
	cout << m;
