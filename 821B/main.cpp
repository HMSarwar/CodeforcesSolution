#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long ans=0,an, result=0, a, b, x, y;
    cin>>a>>b;
    for(y=b;y>=0;y--){
        x=a*(b-y);
        ans=0;
        an=x*(x+1)/2;
        ans+=(y+1)*an;
        an=y*(y+1)/2;
        ans+=(x+1)*an;
        result=max(result, ans);

    }
    cout<<result<<endl;
    return 0;
}
