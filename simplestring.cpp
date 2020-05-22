#include <stdexcept>
#include <cstdio>
#include <cstring>

struct SimpleString {
	// INIT and DEINIT

	// size_t is unsigned so it cannot be negative
	SimpleString(size_t max_size)
		: max_size { max_size }, length{} {
		if (max_size == 0) {
			throw std::runtime_error{ "Max size must be at least 1." };
		}

		// only the memory pointed to by `buffer` has been dinamically allocated
		buffer = new char[max_size];
		buffer[0] = 0;
	}

	~SimpleString() {
		// the only allocated variable is free'd in the destructor
		// -> allocation in contructor + deletion in destructor = never leak memory
		delete[] buffer;
	}


	// PUBLIC METHODS
	
	void print(const char* tag) const {
		printf("%s: %s", tag, buffer);
	}

	bool append_line(const char* x) {
		const auto x_len = strlen(x);
		if (x_len + length + 2 > max_size)
			return false;

		// buffer + length -> pointer arithmetic, points to the last character of the string
		// (null terminator)
		std::strncpy(buffer + length, x, max_size - length);
		length += x_len;
		buffer[length++] = '\n';
		buffer[length] = 0;
	
		return true;
	}

private:
	size_t max_size;
	char* buffer;
	size_t length;
};

int main() {
	SimpleString str{ 70 };
	str.append_line("First line");
	str.append_line("Second line");
	str.print("A");
	str.append_line("Third line");
	str.append_line("Fourth line");
	str.print("B");

	if (!str.append_line("This line must exceed the capacity of the string")) {
		printf("Not enough space\n");
	}
}
