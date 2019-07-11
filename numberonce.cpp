#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int num;
  cin>>num;
  int number[num];
  for(int i=0;i<num;i++){
    cin>>number[i];
  }
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
