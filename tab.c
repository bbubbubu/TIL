#include<stdio.h>

int main(void) {
	FILE *fp;
	int i,obrace=0,cbrace=0,print,end=0;
	char input,bbu;
	fp = fopen("soooooource.txt","w+");
	
	while(input != 17) {
		input = getch();
		if(input != 13) {
			printf("%c",input);
		} else {
			printf("\n");
		}
		fprintf(fp,"%c",input);
	}
	printf("\b \n");

    fclose(fp);
    i=0;
    fp = fopen("soooooource.txt","r");
    
    while(fscanf(fp, "%c", &bbu) != EOF){
    	if(bbu == '{')
    		obrace++;
    	if(bbu == '}')
    		cbrace++;
    }
    
    printf("%d¹ø",obrace-cbrace);
    return 0;
}
