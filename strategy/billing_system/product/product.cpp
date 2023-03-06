#include "product.h"

Product::Product(int price) : price(price) {}

Product::~Product() {}

std::string Product::getUpcCode() { return this->upc_code; }
void Product::setUpcCode(std::string upc_code) { this->upc_code = upc_code; }
int Product::getPrice() { return this->price; }
void Product::setPrice(int price) { this->price = price; }