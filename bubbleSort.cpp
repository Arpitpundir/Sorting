#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &a){

  int n = a.size();
  int swaps = 1;
  while(swaps != 0){
    swaps = 0;
    for(int i = 0;i < n-1;i++){
      
      if(a[i] > a[i+1]){
        
        swap(a[i], a[i+1]);
        swaps++;
      }
    }
  }
}

int main(){

  int n;
  cin>>n;
  vector<int> a;

  for(int i = 0;i<n;i++){

    int temp;
    cin>>temp;
    a.push_back(temp);
  }

  bubbleSort(a);
  for(int i = 0;i<n;i++){

    cout<<a[i]<<" ";
  }
}