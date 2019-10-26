 /*
	JTSK-320111
	a4 p9.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char one[50], two[50], oneTwo[100]; 
	int i,j,k;
	
	fgets(one, sizeof(one), stdin); 
	fgets(two, sizeof(two), stdin);		 
	printf("length1=%lu\n", strlen(one)-1);
	printf("length2=%lu\n", strlen(two)-1); 	
	
	for(i = 0; one[i] != '\n'; ++i){
		oneTwo[i] = one[i];
	}
    for(j = 0; two[j] != '\n'; ++j, ++i){
        oneTwo[i] = two[j];
    }

    oneTwo[i] = '\0';
   
    printf("concatenation=%s\n", oneTwo);
    
    char three[50];
    for (k=0; k<strlen(two)-1; k++){
    	three[k]=two[k];
	}
	three[k] = '\0';
	
    printf("copy=%s\n", three);    

	if(strcmp(one, two)<0){
		printf("one is smaller than two\n");
	}
	else if(strcmp(one, two)>0){
		printf("one is larger than two\n");
	}
	else{
		printf("one is equal to two\n");
	}
	
	char c;
	scanf("%c", &c);
	int m, f=0;
	for(m=0; m<strlen(two); m++)
	{
		if(two[m]==c)
		{
    		printf("position=%d\n",m);
			f=1;
		}
    }
	if(f==0)
	{
		printf("The character is not in the string\n");
	}
	return 0;
}