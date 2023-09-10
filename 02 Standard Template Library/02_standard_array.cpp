#include "../lib/stdlib.h"
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  array<int, 4> arr {1, 2, 3, 4};

  cout<<"Value at Position 2: "<<arr.at(2)<<"\nValue at Front: "<<arr.front()<<"\nValue at Back: "<<arr.back()<<"\n";

  array<int, 10> arr2;
  cout<<"\nAddress of First Index: "<<arr2.begin()<<"\nAddress of Last Index: "<<arr2.end()<<"\nAddress of Array: "<<arr2.data();

  cout<<"\n";

  return 0;
}