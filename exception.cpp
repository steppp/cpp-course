#include <stdexcept>
#include <cstdio>

struct Brain {
	void forget(int x) {
		if (x == 0xFACE) {
			throw std::runtime_error{ "Oopsie." };
		}

		printf("Forgot 0x%x\n", x);
	}
};

int main() {
	Brain mBrain;

	try {
		mBrain.forget(0xC0DE);
		mBrain.forget(0xFACE);
		mBrain.forget(0xC0FFEE);
	} catch (const std::runtime_error& e) {
		printf("exception caught: %s\n", e.what());
	}
}
