#include <stdio.h>
#include "myMath.h"

int main() {
	// absorving the point value:
	double point = 0;
	scanf("Please insert a real number: %lf" , &point);

	// calculating the three functions's values in this point:
	double funcX1 = sub(		add( 	Exp((int)point) , Pow(point , 3)		 )	 , 2);
	double funcX2 = add(		mul(point , 3)	 	, 	mul(		Pow(point, 2) , 2	)	);
	double funcX3 = sub(		div( 		mul( 	Pow(point , 3) , 4		)	 ,	5	)	,	mul(point, 2)		);

	// printing the results:
	printf("The value of f(x) = e^x + x^3 - 2 at the point %f is: %.4f\n" , point, funcX1);
	printf("The value of f(x) = 3x + 2x^2 at the point %f is: %.4f\n" , point, funcX2);
	printf("The value of f(x) = (4x^3)/5 - 2x at the point %f is: %.4f\n" , point, funcX3);
	
return 0;
}