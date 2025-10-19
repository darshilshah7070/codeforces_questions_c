/*https://codeforces.com/problemset/problem/1559/A*/

#include <stdio.h>



int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
       int n;
       scanf("%d",&n);
       int a[n];
       int mini=1e10;
       for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x<mini) mini=x;
        a[i]=x;
       }
       int ans=mini;
       for(int i=0;i<n;i++){
        ans=ans&a[i];
       }
       printf("%d\n",ans);
    }
}
