#include <iostream>
using namespace std;

int main(){
  float fstNum,secNum,result;
  char op;
  char ch;

  do{
    cout << "Enter first number, operator, second number: ";
    cin >> fstNum >> op >> secNum;
    switch(op){
      case '+':
        result = fstNum + secNum;
        break;
      case '-':
        result = fstNum - secNum;
        break;
      case '*':
        result = fstNum * secNum;
        break;
      case '/':
        result = fstNum / secNum;
        break;
    }

    cout << "Answer = " << result << endl;
    cout << "Do another (y/n)? ";
    cin >> ch;
  }while( ch != 'n');

  return 0;
}