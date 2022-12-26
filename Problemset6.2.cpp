#include <iostream>
#include <string>
using namespace std;

char alphabet(char cha){
   if(cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U' || cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u') return 'y';
   else return 'n';
}

int main(){
  cout << alphabet('A') << endl;
  cout << alphabet('a') << endl;
  cout << alphabet('B') << endl;
  cout << alphabet('z') << endl;
  cout << alphabet('6') << endl;
  cout << alphabet('U') << endl;
  cout << alphabet('i') << endl;
  return 0;
}