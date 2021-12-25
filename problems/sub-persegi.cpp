#include <iostream>
using namespace std;

int main(){
  int N, res;
  cin>>N;
  res = 0;
  for(int i=1; i<=N; i++){
    res+=i*i;
  }
  cout<<res;
  return 0;
}
