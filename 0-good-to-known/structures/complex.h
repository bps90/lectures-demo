typedef struct {
	double real;
	double img;
} complexType;

complexType new_complex(double real, double img);

complexType sum_complex(complexType a, complexType b);

double abs_complex(complexType c);

complexType read_complex();

void print_complex(complexType a);

int is_equal_complex(complexType a, complexType b);

complexType mult_complex(complexType a, complexType b);

complexType conjugated_complex(complexType a);