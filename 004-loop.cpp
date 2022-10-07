#include <iostream>
using namespace std;

int main(){
  int a = 10;
  for (int i=1; i<=a; i++){
    cout << i << endl;
  }
  
  while(a>0){
    cout << a<<endl;
    a=a-1;
  }
  return 0;
}
