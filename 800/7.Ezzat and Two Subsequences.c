/*https://codeforces.com/problemset/problem/1557/A*/

#include <stdio.h>

int main(){
    int t=1;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int maxi=-1e10;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            if(x>maxi)maxi=x;
            a[i]=x;
        }
        int vis=0;
        double ans=0;
        for(int i=0;i<n;i++){
            if(vis==0 && a[i]==maxi)vis++;
            else{
                ans+=a[i];
            }
        }
        ans/=(n-1);
        ans+=maxi;
        printf("%f\n",ans);

    }
}