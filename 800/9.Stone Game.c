/*https://codeforces.com/problemset/problem/1538/A*/

#include <stdio.h>
#include <stdlib.h>
int min(int a,int b){
    if(a<b)return a;
    else return b;
}
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

        int ans1=0,ans2=0,ans3=0,ans4=0;
        int temp1=0,temp2=0;
        for(int i=1;i<=n;i++){
            if(a[i]==mini){ans1++;break;}
            else ans1++;
        }
        for(int i=n;i>=1;i--){
            if(a[i]==maxi){ans1++;break;}
            else ans1++;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==maxi){ans2++;break;}
            else ans2++;
        }
        for(int i=n;i>=1;i--){
            if(a[i]==mini){ans2++;break;}
            else ans2++;
        }
         for(int i=1;i<=n;i++){
            if(temp1 && temp2)break;
            if(a[i]==mini){ans3++;temp1++;}
            else if (a[i]==maxi){ans3++;temp2++;}
            else ans3++;
        }
        temp1=0;temp2=0;
        for(int i=n;i>=1;i--){
            if(temp1 && temp2)break;
            if(a[i]==mini){ans4++;temp1++;}
            else if (a[i]==maxi){ans4++;temp2++;}
            else ans4++;
        }
    int ans = (ans1 < ans2 ? ans1 : ans2);
    ans = (ans < ans3 ? ans : ans3);
    ans = (ans < ans4? ans : ans4);
    printf("%d\n",ans);
        
}
}