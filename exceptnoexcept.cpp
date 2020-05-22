#include <stdexcept>

void farewell() noexcept {
	throw std::runtime_error{ "Goodbye, cruel world.\n" };
}

int main() {
	try {
		farewell();
	} catch(...) {	// catch-all exception handler
		printf("I got this.");
	}

	printf("Nothing can go wrong here.");
}
