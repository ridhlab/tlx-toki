#include <iostream>
using namespace std;

int main(){
  int row, target, num;
  cin>>row>>target;
  for(int i=0; i<row; i++){
    cin>>num;
    if(num == target){
      cout<<i;
      break;
    }
    if(i == row-1){
      cout<<-1;
    }
  }
  return 0;
}




