/*https://codeforces.com/problemset/problem/1554/A*/

#include <stdio.h>
#define ll long long

ll min(ll a,int b){
    if(a<b)return a;
    else return b;
}

ll max(ll a,ll b){
    if(a>b)return a;
    else return b;
}

int main(){
    int t=1;
    scanf("%d",&t);
   
    
    while(t--){
        int n;
        scanf("%d",&n);
        ll a[n];
        
        for(int i=0;i<n;i++)scanf("%lld",a+i);
        ll ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,a[i]*a[i-1]);
        }
        printf("%lld\n",ans);

       
    }
}