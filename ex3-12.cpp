#include <iostream>
using namespace std;

int main(){
  float a,b,c,d;
  float result;
  char op,dummychar;
  char ch;

  do{
    cout << "Enter first fraction: ";
    cin >> a >> dummychar >> b;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second fraction: ";
    cin >> c >> dummychar >> d;
    cout << a << " " << b << " " << op << " " << c << " " << d << endl;
    switch(op){
      case '+':
        result = ((a * d) + (b * c))/(b*d);
        break;
      case '-':
        result = ((a * d) - (b * c))/(b*d);
        break;
      case '*':
        result = (a * c) / (b * d);
        break;
      case '/':
        result = (a * d) / (b * c);
        break;
    }

    cout << "Answer = " << result << endl;
    cout << "Do another (y/n)? ";
    cin >> ch;
  }while( ch != 'n');

  return 0;
}