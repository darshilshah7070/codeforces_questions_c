/*https://codeforces.com/problemset/problem/1550/A*/

#include <stdio.h>

int main(){
    int t=1;
    scanf("%d",&t);
    int a[3000];
    for(int i=1;i<3000;i++){
        a[i]=i*i;
    }
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            if(n<=a[i]){
                printf("%d\n",i);
                break;
            }
        }

    }
}