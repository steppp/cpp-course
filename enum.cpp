#include <cstdio>

enum class Scoped {
	Wow,
	This,
	Is,
	Brilliant
};

enum Unscoped {
	But,
	I,
	Like,
	This
};

int main() {
	Scoped scoped_var = Scoped::Wow;
	Unscoped unscoped_var = I;
	printf("Scoped: %d, Unscoped: %d\n", scoped_var, unscoped_var);
}
