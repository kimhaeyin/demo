#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	swap(a,b);
	cout << a <<' ' << b <<endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a <<' ' << b <<endl;
}