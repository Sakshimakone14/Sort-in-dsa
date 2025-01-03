 #include <stdio.h>
#include <string.h>
int main() 
{
    char a[10][10];
    char max[10];
    int i, n, index, pass;

          printf("Enter limit= ");
                scanf("%d",&n);
             printf("Enter n elements= ");
                for(i=0;i<n;i++)
                   {
                       scanf("%s",a[i]);
                   }

    for (pass = 0; pass < n - 1; pass++) {
        strcpy(max, a[pass]);
        index = pass;
        for (i = pass + 1; i < n; i++) 
        {
            if (strcmp(a[i], max) < 0)
             {
                strcpy(max, a[i]);
                index = i;
            }
        }
            strcpy(a[index], a[pass]);
            strcpy(a[pass], max);
        
    }

    printf("\nSorted elements:\n");
    for (i = 0; i < n; i++) {
        printf("%s\t", a[i]);
    }
    printf("\n");

    return 0;
}
 
