#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int num;
  int a=0,b=0,temp=0;
  cout<<"enter how many numbers"<<endl;
  cin>>num;
  int arr[num];
  cout<<"enter the numbers"<<endl;
  for(int i=0;i<num;i++){
    cin>>arr[i];
  }
   for(int i=0; i<num; i++){
    for(int j=i+1;j<num;j++){
      if(arr[i]>arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  bool bol=false;
  for(int i=0;i<num-1;i++){
    for(int j=i+1;j<num;j++){
      if(arr[i]==arr[j]){
        arr[j]=-1;
        bol=true;
      }
    }
      if(bol && arr[i]>0){
        cout<<arr[i];
        bol=false;
      }
  }

}
