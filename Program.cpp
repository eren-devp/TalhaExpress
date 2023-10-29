#include <iostream>
#include "Product.hpp"

int main() {
	Product* head;
	Product* one;
	Product* two;
	Product* three;

	head = new Product("Watch", 200, 10);
	one = new Product("Phone", 900, 20);
	two = new Product("Monitor", 650, 5);
	three = new Product("Keyboard", 300, 20);

	head->setLinkedProduct(one);
	one->setLinkedProduct(two);
	two->setLinkedProduct(three);

	Product* current;
	current = head;
	while (current != NULL) {
		current->display();
		current = current->getLinkedProduct();
		std::cout << std::endl;
	}
}