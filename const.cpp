#include <cstdio>

struct Date {
	// the `const` keyword here means that the parameter's value
	// must not be modified inside the method
	void setYear(const int year) {
		this->year = year;
	}

	// the `const` keyword here means that this method does not
	// modify the current object's state
	// a method declared in this way cannot call a method that
	// is not `const`
	int getYear() const {
		return this->year;
	}

private:
	int year;
};

// since date here is marked as const, `getYear` must be declared `const` itself
// otherwise, since date is passed by reference, it could be modified inside
// that method and the compilation would fail
bool isCoronaYear(const Date& date) {
	if (date.getYear() == 2020)
		return true;
	return false;
}

int main() {
	Date date;
	date.setYear(2020);
	printf("%d\n", isCoronaYear(date));
}

