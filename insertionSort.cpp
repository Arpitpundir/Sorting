#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a){

  int len = a.size();
  for(int i=1;i<len;i++){
    int key=a[i];
    int j=i-1;
    while(key<a[j]){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=key;
  }
}

int main(){
  int len;
  cin>>len;
  vector<int> arr;
  for(int i=0;i<len;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  insertionSort(arr);
  for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
  }
}