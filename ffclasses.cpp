#include <cstdio>

// class can be used instead of struct, exactly the same
struct MoneyBalance {
	// default constructor that uses directly the other one
	MoneyBalance() : MoneyBalance(0) { }

	// constructor
	MoneyBalance(int b) {
		balance = b;
	}

	~MoneyBalance() {
		printf("LOL now you're poor\n");
	}

	void add50() {
		balance += 50;
	}
	
	bool setBalance(int b) {
		if (b < 0)
			return false;
		balance = b;
		return true;
	}

	int getBalance() {
		return balance;
	}

// the only difference is that all memebers are private by default
// so the keyword `public` should be used to define them as such
private:
	int balance;
};

int main() {
	MoneyBalance mb;

	mb.add50();
	printf("Balance: %d\n", mb.getBalance());

	mb.add50();
	printf("Balance: %d\n", mb.getBalance());
}
