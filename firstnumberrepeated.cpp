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
      for(int j=i+1;j<num;j++)
      {
        if(number[i]==number[j])
        {
          cout<<number[i];
          flag=false;
          break;
        }
      }
      if(flag==false){
        break;
      }
    }
  if(flag!=false){
    cout<<"unique";
  }
  }
