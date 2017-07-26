/* This code is generated for solving Codeforces 545C problem, named as " Woodcutter"
This code is generated on July 22, 1:50am...

*/
#include <bits/stdc++.h>

using namespace std;
int arr[100000];
int arr1[100000];
int main()
{
    int n,m, temp=-1000000000,cnt=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i]>>arr1[i];

    }
    if(n==1)return cout<<"1"<<endl, 0;
    int l=arr[0];
    for(int i=1;i<n-1;++i){
        if(l<(arr[i]-arr1[i])){
            cnt++;
            l=arr[i];
        }
        else{

        if((arr1[i]+arr[i])<arr[i+1]){
            cnt++; l=arr[i]+arr1[i];
        }
        else l=arr[i];
        }
    }
    cout<<cnt+2<<endl;
    return 0;
}
