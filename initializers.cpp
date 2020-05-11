#include <cstdio>

struct Date {
	int year, month, day;

	// initialize members with a Member Initializer List
	Date(int year, int month, int day):
		year { year }, month { month }, day { day } {
	}

	void printCurrentDate() const {
		printf("Current date is %d/%d/%d\n",
				this->year,
				this->month,
				this->day);
	}
};

int main() {
	Date thisFileCreated{2020, 5, 11};
	thisFileCreated.printCurrentDate();
}
