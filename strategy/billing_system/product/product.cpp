#include "product.h"

Product::Product(std::string upc_code, int price) : upc_code(upc_code), price(price) {}
Product::~Product() {}

std::string Product::getUpcCode() { return this->upc_code; }
void Product::setUpcCode(std::string upc_code) { this->upc_code = upc_code; }
int Product::getPrice() { return this->price; }
void Product::setPrice(int price) { this->price = price; }


/* ---- Operators Override ---- */
bool Product::operator==(const Product& p)
{
    return this->upc_code == p.upc_code;
}
