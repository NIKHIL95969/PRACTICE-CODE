#include<stdio.h>
# include <stdlib.h>

int main(){

    int *ptr;
    ptr = (int*)calloc(5,sizeof(float));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("%d \n",  ptr[i]);
    }
    
	return 0;
}