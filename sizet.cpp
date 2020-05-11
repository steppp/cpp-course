#include <cstddef>
#include <cstdio>

int main() {
	size_t size_c = sizeof(char);
	printf("char: %zd\n", size_c);
	size_t size_s = sizeof(short);
	printf("char: %zd\n", size_s);
	size_t size_i = sizeof(int);
	printf("char: %zd\n", size_i);
	size_t size_l = sizeof(long);
	printf("char: %zd\n", size_l);
	size_t size_ll = sizeof(long long);
	printf("char: %zd\n", size_ll);
}

