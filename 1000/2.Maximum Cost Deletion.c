/*https://codeforces.com/contest/1550/problem/B*/

#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
       int n,a,b;
       scanf("%d %d %d",&n,&a,&b);
       char arr[n];
       scanf("%s",arr);
       if(b>=0){
        printf("%d\n",a*n+b*n);
       }
       else{
        int blk=1;
        for(int i=0;i<n-1;i++)if(arr[i]!=arr[i+1])blk++;
        int k=blk/2+1;
        printf("%d\n",(a*n+b*k));
        // printf("%d ",k);
       }
    }
}
