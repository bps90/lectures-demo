#include "complex.h"
#include <stdio.h>
#include <math.h>

complexType new_complex(double real, double img){
	complexType c; 
	c.real = real;
	c.img = img;
	return c;
}

complexType sum_complex(complexType a, complexType b){

	return new_complex(a.real + b.real , a.img + b.img);

}

complexType read_complex(){
	complexType a;

	scanf("%lf %lf", &a.real, &a.img);

	return a;
}

void print_complex(complexType a){
	printf("Complex: %lf + (%lf*i)\n", a.real, a.img);
}

double abs_complex(complexType c){
	printf("Implemente abs_complex\n");
	return 0.0;
}

int is_equal_complex(complexType a, complexType b){
	printf("Implemente is_equal_complex\n");
	return 0;	
}

complexType mult_complex(complexType a, complexType b){
	printf("Implemente mult_complex\n");

	return a;	
}

complexType conjugated_complex(complexType a){
	printf("Implemente conjugated_complex\n");

	return a;	
}