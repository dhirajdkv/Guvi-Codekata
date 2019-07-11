#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int num;
  int count=0;
  cin>>num;
  int number[num];
  int temp=0;
  for(int i=0;i<num;i++){
    cin>>number[i];
    if(number[i]==0){
      count++;
    }
  }
  if(count!=num){
    for(int i=0;i<num;i++){
    for(int j=i+1;j<num;j++){
      if(number[i]<number[j]){
        temp = number[i];
        number[i]=number[j];
        number[j]=temp;
      }
    }
  }
  for(int i=0;i<num;i++){
      cout<<number[i];
    }
  }
  else{
    cout<<0;
  }
  
}
