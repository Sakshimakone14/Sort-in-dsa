#include<stdio.h>
#include <string.h>
void bubble(char a[20][20],int n)
 {
  int pass,i;
  char t[30];
     for(pass=1;pass<n;pass++)
            {
                for(i=0;i<n-pass;i++)
                    {
                        if(strcmp(a[i],a[i+1])>0)
                          {
                               strcpy(t,a[i]);
                               strcpy(a[i],a[i+1]);
                               strcpy(a[i+1],t);                              
                          }
                    }
                } 
   }                
   int main()
    {
         char a[20][20],t[10];
         int i,n,pass;
           printf("Enter limit= "); 
             scanf("%d",&n);
          printf("Enter n ");
           for(i=0;i<n;i++)
            { 
              scanf("%s",a[i]);  
            }
         bubble(a,n);   
       printf("\nSoretd= ");
         for(i=0;i<n;i++)
           {
                  printf("%s\t",a[i]);
           }          
    }
