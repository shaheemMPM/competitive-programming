#include "../lib/stdlib.h"
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  cout<<"Enter Number of Elements in Array: ";
  cin>>n;

  int arr[n];

  cout<<"\n";
  for(int i = 0; i < n; i++) {
    cout<<"Enter Element "<<i+1<<" : ";
    cin>>arr[i];
  }
  
  cout<<"\nArray is: ";
  for(int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }

  cout<<"\n";

  return 0;
}