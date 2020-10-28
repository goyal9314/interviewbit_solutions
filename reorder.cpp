#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,y,z,m,n;
    int t;

    cin>>t;
    while(t--){
        x=0;
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>y;
            x=x+y;
        }
        if(x==m)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
