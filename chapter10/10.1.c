#include <stdio.h>

#define PI 3.141592			/* define a constant */
#define P printf			/* define a shortcut name to printf */
#define S scanf				/* define a shortcut name to scanf */
#define cube(n) n*n*n		/* defining function like code */

main(){
	double radius,volume;
	P("Enter radius of sphere : ");
	S("%lf",&radius);
	
	volume=(4.0/3)*PI*cube(radius);
	
	P("Volume of sphere is %f",volume);
}

