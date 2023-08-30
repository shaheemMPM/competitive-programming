#include "../lib/stdlib.h"
using namespace std;

int main() {
  int T;
  cin>>T;

  for(int i = 0; i < T; i++) {
    int num;
    cin>>num;
    int countOfFour = 0;
    while(num > 0) {
      if(num%10 == 4) {
        countOfFour++;
      }
      num /= 10;
    }
    cout<<countOfFour<<endl;
  }

  return 0;
}