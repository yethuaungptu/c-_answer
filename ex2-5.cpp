#include<iostream>
#include<ctype.h>

using namespace std;

int main(){
	char x;
	cout << "Enter any letter: ";
	cin >> x;
	cout << islower(x) << endl;
	return 0;
}