#include<bits/stdc++.h>
using namespace std;

void countSort(vector<pair<int, pair<string , string> > > a){

    int n = a.size();
    vector<int> count;
    count.resize(100, 0);

    for(int i = 0;i < n; i++){
        count[a[i].first]++;
    }

    for(int i = 1;i < 100;i++){

        count[i] += count[i-1];
    }

    vector<pair<int, pair<string , string> > > output;
    output.resize(n);

    for(int i = n-1;i >= 0;i--){

        output[count[a[i].first] - 1] = a[i];
        count[a[i].first]--;
    }

    for(int i = 0;i < n;i++){

        cout<<output[i].second.second<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    vector<pair<int, pair<string, string> > >a;

    int i = 0;
    for(i = 0;i < n/2;i++){

        int t1;
        string t2;
        cin>>t1>>t2;
        a.push_back(make_pair(t1, make_pair(t2, "-")));
    }

    for(;i < n; i++){
        int t1;
        string t2;
        cin>>t1>>t2;
        a.push_back(make_pair(t1, make_pair(t2, t2)));
    }

    countSort(a);
}