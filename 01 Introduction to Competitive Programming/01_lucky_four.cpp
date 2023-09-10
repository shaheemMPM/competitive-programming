#include "../lib/stdlib.h"
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int T;
  cin>>T;

  while(T--) {
    int num;
    cin>>num;
    int countOfFour = 0;
    while(num > 0) {
      if(num%10 == 4) {
        countOfFour++;
      }
      num /= 10;
    }
    cout<<countOfFour<<"\n";
  }

  return 0;
}