#include <stdio.h>
#include "complex.h"

int main(int argc, char const *argv[]) {
	
	complexType a, b, c;

	a = read_complex();
	b = read_complex();

	c = sum_complex(a, b);

	print_complex(c);


	/*
	printf("%f\n", complexo_absoluto(c));
	printf("%f\n", is_equal_complex(a, b));
	printf("%f\n", mult_complex(a, b));
	printf("%f\n", conjugated_complex(a));
	*/

	return 0;
}