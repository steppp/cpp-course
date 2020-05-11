#include <cstdio>

class Date {
	int year;
public:
	Date() {
		year = 2020;
	}

	void setYear(int value) {
		year = value;
	}

	int getYear() {
		return year;
	}
};

// the & symbol here indicates that this parameter is a reference
// without it, any change performed on the `date` parameter would
// not be reflected in the calling methods
void addOneYear(Date& date) {
	// since date is passed by reference, modifying its value here
	// also modifies its value in the calling method
	// references are safer than pointers
	date.setYear(date.getYear() + 1);
}

int main() {
	Date date;
	printf("Current year is: %d\n", date.getYear());
	
	// date is implicitly passed by reference
	addOneYear(date);
	printf("Next year will be: %d\n", date.getYear());
}
