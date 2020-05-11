#include <cstdio>

// static, global variables are created when the program starts
// and are deallocated when it stops
static int the_answer = 42;

// `extern` has the same properties of `static` but in addition
// this variable can be seen by classes in other files
extern int answer_plus_one;

void checkAnswer() {
	printf("The answer is still %d\n", the_answer);
}

void incrementLocalVariable(int amount) {
	// local STATIC  variables are created when the method runs
	// for the first time, and deallocated when the program stops
	// their value is preserved between different calls of the method
	// and they aren't accessible from the outsie (since they are LOCAL)
	static int total = 200;
	total += amount;
	printf("Total amount is: %d\n", total);
}

int main() {
	printf("Answer is %d\n", the_answer);
	checkAnswer();

	incrementLocalVariable(34);
	incrementLocalVariable(the_answer);

	printf("In the end, the answer is %d\n", the_answer);
}
