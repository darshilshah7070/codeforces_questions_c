/*https://codeforces.com/problemset/problem/1538/A*/

#include <stdio.h>

int main(){
    int t=1;
    scanf("%d",&t);
   
    
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1];
        int maxi=0,mini=101,maxi_i=0,mini_i=0;
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d",&x);
            if(x>maxi){maxi=x;maxi_i=i;}
            if(x<mini){mini=x;mini_i=i;}
            a[i]=x;
        }
        int mid=n/2+(n&1);
        int ans=0;
        if(maxi_i<=mid && mini_i<=mid){
            ans=(maxi_i>mini_i)?maxi_i:mini_i;
        }
        else if(maxi_i>=mid && mini_i>=mid){
            maxi_i=n-maxi_i+1;
            mini_i=n-mini_i+1;
            ans=(maxi_i>mini_i)?maxi_i:mini_i;
        }
        else{
            if(maxi_i>mid) maxi_i=n-maxi_i+1;
            if(mini_i>mid)mini_i=n-mini_i+1;
            ans=maxi_i+mini_i;
        }
        // printf("%d %d %d %d ",maxi,mini,maxi_i,mini_i );
        ans=(ans>(mid+1))?(mid+1):ans;
        // else ans=(ans>(mid+1))?(mid+1):ans;
        printf("%d\n",ans);

    }
}