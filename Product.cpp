#include "Product.hpp"

Product::Product(std::string _name, float _originalPrice, int _discount)
{
	name = _name;
	originalPrice = _originalPrice;
	discount = _discount;
}

void Product::setName(std::string newName)
{
	name = newName;
}

void Product::setOriginalPrice(float newPrice)
{
	originalPrice = newPrice;
}

void Product::setDiscount(int newDiscount)
{
	discount = newDiscount;
}

void Product::setLinkedProduct(Product* _linkedProduct)
{
	linkedProduct = _linkedProduct;
}

void Product::display()
{
	std::cout << "Product Name: " << getName() << std::endl;
	std::cout << "Product Price: " << getOriginalPrice() << std::endl;
	std::cout << "Product Discount: " << getDiscount() << std::endl;
	std::cout << "Total Price: " << getCurrentPrice() << std::endl;
}

std::string Product::getName()
{
	return name;
}

float Product::getOriginalPrice()
{
	return originalPrice;
}

float Product::getCurrentPrice()
{
	return originalPrice * (100.0f - discount) / 100;
}

int Product::getDiscount()
{
	return discount;
}

Product* Product::getLinkedProduct()
{
	return linkedProduct;
}
