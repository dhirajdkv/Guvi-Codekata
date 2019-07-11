#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int num=11;
  int number[]={1,2,4,4,2,3,3,8,9,8,9};
  bool flag=true;
  for(int i=0;i<num;i++){
    if(number[i]!=0){
      for(int j=i+1;j<num;j++)
      {
        if(number[i]==number[j])
        {
          number[j]=0;
          break;
        }
        else if((number[i]!=number[j]) && j==num-1){
          cout<<number[i];
        }
      }
    }
  }
}
