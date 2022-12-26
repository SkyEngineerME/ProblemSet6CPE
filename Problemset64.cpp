#include <iostream>
using namespace std;

int main(){
    int a = 2 ,b = 3,c =4;
    c = b = 2 == a++;
    cout << a << ' ' << b << ' '<< c;
    return 0;
}