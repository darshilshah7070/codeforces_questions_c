/*https://codeforces.com/problemset/problem/1537/A*/

#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int sum=0;
        for(int i=0;i<n;i++){
            int z;
            scanf("%d",&z);
            sum+=z;
        }
        if((sum-n)<0)printf("1\n");
        else printf("%d\n",sum-n);
    }
}