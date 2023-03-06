#ifndef __SHOPING_CART__
#define __SHOPING_CART__

#include <list>

#include "../product/product.h"
#include "../payment/payment_i.h"

class ShopingCart {
public:
    ShopingCart();
    ~ShopingCart();

    void addProduct(const Product& p);
    void removeProduct(const Product& p);
    void pay(const IPayment& payment);
private:
    std::list<Product> products;
};

#endif//__SHOPING_CART__
