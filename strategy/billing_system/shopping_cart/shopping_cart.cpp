#include<bits/stdc++.h>

#include "shopping_cart.h"

ShopingCart::ShopingCart() {}
ShopingCart::~ShopingCart() {}

void ShopingCart::addProduct(const Product& p)
{
    this->products.push_back(p);
}

void ShopingCart::removeProduct(const Product& p)
{
    std::list<Product>::iterator i = std::find(this->products.begin(), this->products.end(), p);
    this->products.erase(i);
}

void ShopingCart::pay(const IPayment& payment)
{

}

/* ---- Operators Override ---- */
bool Product::operator==(const Product& p)
{
    return this->upc_code == p.upc_code;
}
