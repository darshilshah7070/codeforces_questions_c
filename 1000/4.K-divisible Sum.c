/*https://codeforces.com/problemset/problem/1476/A*/
#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        if(k<n){
           k=((n+k-1)/k)*k;
        }
        int ans=(k/n)+(k%n!=0);
        printf("%d\n",ans);
    }
}