#include<bits/stdc++.h>
using namespace std;

void merge(int st, int mid, int end, vector<int> &a){

  int l1=mid-st+1;
  int l2=end-mid;

  vector<int> left, right;
  for(int i=0;i<l1;i++){
    left.push_back(a[i+st]);
  }
  for(int i=0;i<l2;i++){
    right.push_back(a[i+mid+1]);
  }

  int i=0, k=st, j=0;
  while(i<l1&&j<l2){

    if(left[i]<=right[j]){
      a[k]=left[i];
      k++,i++;
    }
    else{
      a[k]=right[j];
      k++, j++;
    }
  }

  while(i<l1){
    a[k]=left[i];
    i++,k++;
  }

  while(j<l2){
    a[k]=right[j];
    j++,k++;
  }
}

void mergeSort(int st, int end, vector<int> &a){

  if(st<end){
    int mid = st+(end-st)/2;
    mergeSort(st, mid, a);
    mergeSort(mid+1, end, a);
    merge(st, mid, end, a);
  }
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
  mergeSort(0, n-1, a);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}