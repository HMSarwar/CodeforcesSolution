#include <bits/stdc++.h>

using namespace std;
vector < int > st;
int arr[1234567];
pair < int , int > sp[1234567];
int main()
{
    int n,m,p;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>p;
        st.push_back(p);
    }
    sort(st.begin(),st.end());
    for(int i=0;i<m;++i){
        cin>>p;
        sp[i]={p, i};
    }
    sort(sp, sp+m);
    int i=n-1, j=m;
    while(j--){
        while(i>=0 && st[i]>sp[j].first)--i;
        arr[sp[j].second]=i+1;
    }
    for(int i=0;i<m;++i){
        cout<<arr[i];
        if(i!=m)cout<<" ";
    }
    cout<<endl;
    return 0;
}
