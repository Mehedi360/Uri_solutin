#include <stdio.h>
int main()
{
    int n,sum=0,i;
    while (1)
    {
        scanf("%d",&n);
        sum=0;
       if (n==0)
       {
         break;
       }
       if (n%2==0)
       {
           for(i=n; i<=n+8; i+=2)sum=sum+i;
       }
       
       else{
           for(i=n+1; i<=n+9; i+=2)  sum=sum+i;
  
       }  
       printf("%d\n",sum);    
    }
    return 0;
    
}