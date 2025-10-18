/*https://codeforces.com/problemset/problem/158/A*/

#include <stdio.h>  

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>0 && a[i]>=a[k-1])ans++;
    }
    printf("%d",ans);
}