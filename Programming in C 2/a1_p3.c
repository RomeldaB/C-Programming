/*
	JTSK-320112
	a1 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
// In order to find the min and max of three numbers we need to find firstly
// the min and max of the first two and then compare it to the third number.
#define MIN2(a,b) (a < b ? a:b)
#define MIN3(a,b,c) (MIN2(MIN2(a,b),c))
#define MAX2(a,b) (a > b ? a:b)
#define MAX3(a,b,c) (MAX2(MAX2(a,b),c))
#define MIDRANGE(a,b,c) ((MIN3(a,b,c)+MAX3(a,b,c))/2.0)

int main()
{
	int x, y, z;
	scanf("%d\n%d\n%d", &x, &y, &z);
	float mr;
	mr = MIDRANGE(x,y,z);
	printf("The mid-range is: %.6f\n", mr);
	
	return 0;
}