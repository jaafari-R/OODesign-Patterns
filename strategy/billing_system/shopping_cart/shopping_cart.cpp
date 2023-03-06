#include<bits/stdc++.h>

#include "shopping_cart.h"

ShoppingCart::ShoppingCart() {}
ShoppingCart::~ShoppingCart() {}

void ShoppingCart::addProduct(const Product& p)
{
    this->products.push_back(p);
}

void ShoppingCart::removeProduct(const Product& p)
{
    std::list<Product>::iterator i = std::find(this->products.begin(), this->products.end(), p);
    this->products.erase(i);
}

int ShoppingCart::calculateTotal() {
    int sum = 0;
    for(Product& p: products)
        sum += p.getPrice();
    return sum;
}

void ShoppingCart::pay(const IPayment& payment)
{

}
