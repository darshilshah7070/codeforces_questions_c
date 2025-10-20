/*https://codeforces.com/problemset/problem/1515/B*/

#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
        long long a[100]={0};
        long long maxi=1e9;
        for(long long i=0,z=2;;){
            a[i]=z;
            z*=z;
            i++;
            if(z>maxi)break;
        }
    while(t--){
        int n;
        scanf("%d",&n);
        int flag=0;
        for(int i=0;i<100;i++){
            if(a[i]==n){
                printf("YES\n");
                flag++;
                break;
            }
        }
        if(!flag)printf("NO");
    }
    // for(int i=0;i<100;i++){
    //     printf("%d ",a[i]);
    // }
}