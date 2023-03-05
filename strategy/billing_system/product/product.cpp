#include "product.h"

Product::Product(int price) : price(price) {}

Product::~Product() {}


int Product::getPrice() { return this->price; }
void Product::setPrice(int price) { this->price = price; }