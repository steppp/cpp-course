#include <cstdio>

union Variant {
	char text[10];
	int integer;
	double floating_point;
};

int main() {
	printf("size of char[10]: %zd\n", sizeof(Variant::text));
	printf("size of int: %zd\n", sizeof(Variant::integer));
	printf("size of float: %zd\n", sizeof(Variant::floating_point));

	Variant v;
//	v.integer = 42;
//	printf("42: %d\n", v.integer);

	v.floating_point = 2.7182818284;
	printf("e: %f\n", v.floating_point);

//	v.integer = 42;
	printf("42: %d\n", v.integer);
}
