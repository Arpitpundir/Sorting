#include<bits/stdc++.h>
using namespace std;
void countingSort(vector<int> &a, int max){
    vector<int> count;
    count.resize(max+1, 0);
    int n=a.size();
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    vector<int> b;
    b.resize(n);
    for(int i=0;i<n;i++){
        b[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
        for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}
int main(){

    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;a.push_back(temp);
    }
    countingSort(a, 100);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
/*def countingSort(k, a, n):
    freq = [0]*(k+1)#kth element ko include karne ke liye
    count = [0]*(k+1)
    ans = [0]*(n)
    for i in range(n):
        freq[a[i]]+=1
    count[0] = freq[0]
    for i in range(1, k+1):
        #since u also need to include the largest value too so loop will run till k
        count[i] = count[i-1]+freq[i]
    #here u are using updated value so u need to create a new array
    for i in range(n):
        ans[count[a[i]]-1] = a[i]
        #we also need to take care of equal elements so
        count[a[i]]-=1
    return ans

n = int(input())
a = [int(x) for x in input().split()]
maxVal = 0
for i in range(n):
    if(a[i] > maxVal):
        maxVal = a[i]
ans = countingSort(maxVal, a, n)
for i in range(len(ans)):
    print(ans[i], end = " ")*/