#include<stdio.h>

int main(){

	FILE *fptr;
	fptr = fopen("TEST.txt", "a");
    fprintf(fptr, "%c", 'm');
    // fprintf("%c\n", fgetc(fptr));
	// fclose(fptr);
	// if(fptr = NULL){
	// 	printf("File does not exit \n");
	// }
	// else{

    //    fprintf("%c\n", fgetc(fptr));

	// 	fclose(fptr);
	// }
	return 0;
}