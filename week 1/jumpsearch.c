#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
     {
        int n,k;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&k);
        int flag=0,c=0;
        int s=sqrt(n);
        int m = s,beg=0;
       while(a[m]<=k&&m<n)
         {
            c++;
            beg=m;
            m=m+s;
         }
       for(int i=beg;i<m;i++)
        { 
            c++;
            if(a[i]==k)
             {
               printf("Present ");
               flag=1;
               break;
             }
        }
    if(flag==0)
       printf(" Not Present ");
       printf("%d",c);
    t--;
}
return 0;
}