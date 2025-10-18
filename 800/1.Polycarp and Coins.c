/*https://codeforces.com/problemset/problem/1551/A*/

#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%3==0){
            printf("%d %d\n",n/3,n/3);
        }
        else if(n%3==1){
            int a1=n/3;
            int a2=n-2*a1;
            printf("%d %d\n",a2,a1);
        }
        else{
            int a1=n/3;
            int a2=(n-a1)/2;
            printf("%d %d\n",a1,a2);
        }
    }
}