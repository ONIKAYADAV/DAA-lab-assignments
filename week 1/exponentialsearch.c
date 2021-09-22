#include<stdio.h>
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
        {
             scanf("%d",&a[i]);
        }
         scanf("%d",&k);
        int flag=0,c=0;
        if(a[0]==k)
        {
           c++;
           printf("Present ");                                
           printf("%d",c);
        }
        else 
        c++;
        int x=1;
        while(a[x]<=k && x<n )
        {
           c++;
           x=x*2; 
        }
   for(int i=x/2;i<n;i++)
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
        printf("Not Present ");
         printf("%d",c);
    t--;
}

return 0;
}