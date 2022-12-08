#include <iostream>
// #include <cstdio>
#include <conio.h>
using namespace std;

int main (){
  char ch;
  int c,counter = 1;
  int numArr[6],i=0;
  long int number = 0;
  cout << "Enter a number : ";
  /* This code for run in real */
  // while(ch != '\n'){
  //   ch=getchar();
  //   c= ch-48;
  //   if(c < 0 || i > 5) continue;
  //   numArr[i] = c;
  //   i++;
  // };
  // for(int j = i-1; j >= 0; j--){
  //   number += numArr[j] * counter;
  //   counter *= 10;
  // }
  /* This code for run in show */
  while(ch != '\r'){
    ch=getche();
    c= ch-48;
    if(c < 0 || i > 5) continue;
    numArr[i] = c;
    i++;
  };
  for(int j = i-1; j >= 0; j--){
    number += numArr[j] * counter;
    counter *= 10;
  }
  cout << "Number is: " << number << endl;
  return 0;
}