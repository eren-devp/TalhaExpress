#pragma once
#include <iostream>

class Product {
public:
	Product(std::string _name, float _originalPrice, int _discount);

	void setName(std::string newName);
	void setOriginalPrice(float newPrice);
	void setDiscount(int newDiscount);
	void setLinkedProduct(Product* _linkedProduct);
	void display();

	std::string getName();
	float getOriginalPrice();
	float getCurrentPrice();
	int getDiscount();
	Product* getLinkedProduct();

private:
	std::string name;
	float originalPrice;
	int discount;
	Product* linkedProduct;
};