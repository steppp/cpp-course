#include <cstdio>

int main() {
	// `new` creates a pointer to an int value
	// it allocates some memory and returns the address that is saved in `int_ptr`
	int* int_ptr = new int;

	// it is also possible to initialize the dynamic object with an expression, as usual
	double* d_ptr = new double{ 3.0 };

	// `delete` is used to deallocate pointers that have been dinamically allocated
	// NOTE: since memory isn't cleaned up after a `delete`, it is still possible
	// to use the pointer
	// this is a dangerous error, called USE-AFTER-FREE
	delete int_ptr;
	int* sub_int_ptr = new int{ 10 };

	delete d_ptr;
	delete sub_int_ptr;

	if (int_ptr <= 0) {
		return 1;
	}

	printf("int_ptr address is %p\n", int_ptr);
	printf("The pointee could definitely not have this value: %d\n", *int_ptr);

	// WARNING: THIS IS EXACTLY THE USE-AFTER-FREE BUG
	// arrays can be created in such a way too
	// note that in this case its dimension can be unknown at compile-time
	int* values = new int[*int_ptr];
	printf("This is a dangerous zone %d\n", values[1]);

	// remember to free the memory
	// the `delete` expression for both arrays and "normal" pointers returns VOID
	delete values;
}
