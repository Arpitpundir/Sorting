#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &a){

  int n = a.size();

  for(int i = 0;i < n;i++){

    int minPos = i;
    for(int j = i+1;j < n;j++){

      if(a[j] < a[minPos]){

        minPos = j;
      }
    }

    swap(a[i], a[minPos]);
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

  selectionSort(a);
  for(int i = 0;i<n;i++){

    cout<<a[i]<<" ";
  }
}