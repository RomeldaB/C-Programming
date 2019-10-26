/*
	JTSK-320112+
	a4 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	char name[30];
	int age;
};

// Compare function for ages
int compare_int(struct person A, struct person B){
	if(A.age == B.age){
		if(strcmp(A.name, B.name) < 0) return 0;
		else return 1;
	}
	else return (A.age > B.age);
}

// Compare function for names
int compare_char(struct person A, struct person B){
	if(strcmp(A.name, B.name) == 0) return (A.age > B.age);
	else{
		if(strcmp(A.name, B.name) < 0) return 0;
		else return 1;
	}
}

// Function pointer
struct person (*func)(struct person, struct person);

// Bubble Sort 
void bubble_sort(struct person *p, int n, int (*func)(struct person, struct person)) {
    int swapped = 1, i = 0, tmp;
    char ch_tmp[50];
    while(swapped) { 
   		swapped = 0;
        for (i = 0; i < n - 1; i++) { // loop n times - 1 per element            
            if(func(p[i], p[i+1])) {  // swap if order is broken
            	// swap the names
                strcpy(ch_tmp, p[i].name);
                strcpy(p[i].name, p[i+1].name);
                strcpy(p[i+1].name, ch_tmp);
				// swap the ages
			    tmp = p[i].age;
                p[i].age = p[i + 1].age;
                p[i + 1].age = tmp;
                // return to the loop
               	swapped = 1;
           }
       }
       n--;
   }
}

// Function to print the people data
void print(struct person *p, int n){
	int i;
	for(i=0; i<n; i++){
		printf("{%s, %d}; ", p[i].name, p[i].age);
	}
	printf("\n");
}

int main()
{
	int n, i;
	scanf("%d", &n);
	struct person list[n];
	// Getting the data for each person
	for(i=0; i<n; i++){
		scanf("%s", list[i].name);
		scanf("%d", &list[i].age);
	}
	// Sort according to their names
	bubble_sort(list, n, compare_char);
	print(list, n);
	// Sort according to their ages
	bubble_sort(list, n, compare_int);
	print(list, n);
	return 0;
}