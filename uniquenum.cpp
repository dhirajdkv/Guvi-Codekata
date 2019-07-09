#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int num;
  int a=0,b=0,temp=0;
  cin>>num;
  int arr[num];
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
  for(int i=0;i<num;i++){
    for(int j=i+1;j<num;j++){
      if(arr[i]==arr[j]){
        if(arr[i]>0){
          cout<<arr[i]<<" ";
        }
        arr[j]=-1;
        break;
      }
    }
  }

}
