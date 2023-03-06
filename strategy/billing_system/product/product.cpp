#include "product.h"

Product::Product(std::string name, std::string upc_code, int price) 
    : name(name), upc_code(upc_code), price(price) {}

Product::~Product() {}

std::string Product::getName() { return name; }
void Product::setName(std::string name) { this->name = name; }
std::string Product::getUpcCode() { return this->upc_code; }
void Product::setUpcCode(std::string upc_code) { this->upc_code = upc_code; }
int Product::getPrice() { return this->price; }
void Product::setPrice(int price) { this->price = price; }


/* ---- Operators Override ---- */
bool Product::operator==(const Product& p)
{
    return this->upc_code == p.upc_code;
}

Product Product::operator=(const Product& p)
{
    return Product(p.name, p.upc_code, p.price);
}
