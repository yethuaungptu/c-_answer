#include <iostream>
using namespace std;
int main(){
  int amount,years;
  float interest,result;
  cout << "Enter initial amount: ";
  cin >> amount;
  cout << "Enter number of years: ";
  cin >> years;
  cout << "Enter interest rate (percent per year): ";
  cin >> interest;
  result = amount;
  for(int i = 0; i < years; i++){
    result += result * (interest/100);
  }
  cout << "At the end of"  << years << " years, you will have " << result << " dollars." << endl;
}