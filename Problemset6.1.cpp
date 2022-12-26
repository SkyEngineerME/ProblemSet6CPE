#include <iostream>
#include <string>
using namespace std;

int Alphabet(string charac){
    int L = charac.size();
    int x=0,y=0;
    for(int i = 0;i <= L;i++){
      if(charac[i] == 'X') x += 1;
      if(charac[i] == 'Y') y += 1;
    }
    if(x > y)return 1;
    else if(y > x)return -1;
    else if(y == x)return 0;
    else return 0;
  
}
int main(){
    cout << Alphabet("XYXXYX") << endl;
    cout << Alphabet("XXYY") << endl;
    cout << Alphabet("XYYYYY") << endl;
    cout << Alphabet("XYXY") << endl;
    cout << Alphabet("XXXXXYYYY") << endl;
    cout << Alphabet("Y") << endl;
    return 0;
}