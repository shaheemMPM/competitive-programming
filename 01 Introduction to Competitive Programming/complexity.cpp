#include "../lib/stdlib.h"
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  cin>>n;

  /*
    I - Complexity O(n)
  */
  // for (int i = 1; i <= n; i++) {
  //   cout<<i<<' ';
  // }

  /*
    II - Complexity O(log n)
  */
  // for (int i = 1; i <= n; i++) {
  //   i = i*2;
  //   cout<<i<<' ';
  // }

  /*
    III - Infinite loop => no complexity
  */
  // for (int i = 0; i < n; i++) {
  //   i = i/2;
  //   cout<<i<<' ';
  // }

  /*
    IV - Complexity O(log n)
  */
  while (n>0) {
    cout<<n<<" ";
    // n = n >> 1;
    n = n/2;
  }
  
  
  cout<<'\n';
  

  return 0;
}