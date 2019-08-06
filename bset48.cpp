#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int temp=0;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    temp=temp+arr[i];
  }
  cout<<temp/n;
}
