#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//implementing wave sort
int main(){
    vector<int> a;
    int n;
    cin>>n;
    for(int i = 0;i < n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int i = 0;i < a.size(); i+=2){
        if(i > 0 && a[i-1] > a[i]){
            swap(a[i], a[i-1]);
        }
        if(i < n-1 && a[i+1] > a[i]){
            swap(a[i+1], a[i]);
        }
    }
    for(int i = 0;i < a.size();i++){
        cout<<a[i]<<" ";
    }
}