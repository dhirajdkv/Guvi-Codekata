#include <iostream>
using namespace std;
int main() {
  int n;
  int rem,count=0;
  cin>>n;
  while(n>=1){
    rem = n%10;
    count++;
    n=n/10;
  }
  cout<<count;
}
