#include<stdio.h>
 using namespace std;

 int main()
 {
    int m, n ,j, k=0;
    printf("Enter the size of A and B : ");
    scanf("%d %d", &m, &n);

    int a[m], b[n], c[m+n];
    printf("\nEnter the elements of set A :");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the elements of set B :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (c[j]==a[i]);
            break;
            
        }
        if (j == k)
        {
            c[k]==a[i];
            k++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (c[j]==b[i])
            {
                break;
            }
             
        }
        if (j==k)
            {
                c[k]=b[i];
                k++;
            }
        
    }
    printf("\nUnion of A and B is :");
    for (int i = 0; i < k; i++)
    {
        printf("%d", c[i]);
    }
    
    return 0;
 }