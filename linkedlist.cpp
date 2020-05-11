#include <cstdio>

struct Element {
	// since we do not provide a constructor and neither call the default one,
	// initializing the `next` member is crucial to avoid a segmentation fault
	Element* next{};
	char model[2];
	short operating_number;

	// insert a new element after this one
	void insert_after(Element* new_element) {
		new_element->next = next;
		this->next = new_element;
	}
};

void printList(Element* head) {
	// this loop ends when cursor is evaluated to false
	// that is, when its value is equal to `nullptr`
	for (Element* cursor = head; cursor; cursor = cursor->next) {
		printf("stormtrooper %c%c-%d\n",
				cursor->model[0],
				cursor->model[1],
				cursor->operating_number);
	}
}

int main() {
	Element trooper1, trooper2, trooper3;
	
	trooper1.model[0] = 'T'; 
	trooper1.model[1] = 'K'; 
	trooper1.operating_number = 421;
	trooper1.insert_after(&trooper2);

	trooper2.model[0] = 'F'; 
	trooper2.model[1] = 'N'; 
	trooper2.operating_number = 2187;
	trooper2.insert_after(&trooper3);

	trooper3.model[0] = 'L'; 
	trooper3.model[1] = 'S'; 
	trooper3.operating_number = 005;

	printList(&trooper1);	
}
