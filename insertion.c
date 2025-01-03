#include<stdio.h>
  int insert(int a[],int n)
      {
                int i,j,key;
                 for(i=1;i<n;i++)
                   { 
                            key=a[i];
                            for(j=i-1;j>=0;j--)
                             {
                                  if(a[j]>key)
                                   {
                                      a[j+1]=a[j];
                                   }
                                else
                                   {
                                     break;
                                   }   
                             }
                             a[j+1]=key;
                   }
      }
   int main()
     {
         int a[10],i,n;
         printf("Enter limit= ");
           scanf("%d",&n);
        printf("Enter n numbers= ");
          for(i=0;i<n;i++)
            {
                   scanf("%d",&a[i]);
            }
        insert(a,n);
            printf("insertion= ");
          for(i=0;i<n;i++)
            {
                   printf("%d",a[i]);
            } 
     }
