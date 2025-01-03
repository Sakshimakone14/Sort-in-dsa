#include<stdio.h>
    int main()
{
       int a[100],i,n,pass,t;
           printf("Enter limit= ");   
            scanf("%d",&n);
            printf("Enter n numbers= ");
              for(i=0;i<n;i++)
              {
               scanf("%d",&a[i]); 
              }   
         for(pass=1;pass<n;pass++)
           {
                for(i=0;i<n-pass;i++)
                   {
                       if(a[i]>a[i+1])
                         {
                             t=a[i];
                             a[i]=a[i+1];
                             a[i+1]=t;
                         }
                   }
           }
        printf("\nSorted= ");
          for(i=0;i<n;i++)
            {
                   printf("%d\t",a[i]);
            }     
}    
