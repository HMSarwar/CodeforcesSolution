/* This code is generated for solving Codeforces 831C problem, named as " Jury Marks"
This code is generated on July 27, 5:30am...
*/


#include <bits/stdc++.h>

using namespace std;
int arr[234567];
int arr2[234567];
set < int > st, ans;
int main()
{
    int n, m,p;
    cin>>n>>m;
    for(int i=1; i<=n;++i){
        arr[i]=arr[i-1];
        cin>>p;
        arr[i]+=p;
    }
    for(int i=1;i<=m;++i)cin>>arr2[i];
    for(int i=1;i<=n;++i){
        int num=arr2[1]-arr[i];
        for(int j=1;j<=m;++j)st.insert(arr2[j]);
        for(int j=1;j<=n;++j)st.erase(num+ arr[j]);
        if(st.empty())ans.insert(num);
    }

    cout<<(int)ans.size()<<endl;

    return 0;
}
