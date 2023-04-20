#include<bits/stdc++.h>
using namespace std;
void quickSort(int st, int end, vector<int> &a){
  cout<<st<<" "<<end<<endl;

  if(st>=end)
  return;

  int i=st+1;
  for(int j=st+1;j<=end;j++){
    //cout<<i<<" "<<j<<endl;
    if(a[j]<a[st]){
      swap(a[i], a[j]);
      i++;
    }
  }
  swap(a[st], a[i-1]);

  quickSort(st, i-1, a);
  quickSort(i, end, a);
}

int main(){

  int n;
  cin>>n;
  vector<int> a;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    a.push_back(temp);
  }
  quickSort(0, n-1,a);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}