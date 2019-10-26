/*
	JTSK-320111
	a2 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int week, day, hour;
    printf("Nr. of weeks: ");
    scanf("%d", &week);
    printf("Nr. of days: ");
    scanf("%d",&day);
    printf("Nr. of hours: ");
    scanf("%d", &hour);

    int tw, td, total;
    tw = week*168;
    td = day*24;
    total = tw + td + hour;
    
    printf("The total number of hours is %d\n", total);

return 0;
}