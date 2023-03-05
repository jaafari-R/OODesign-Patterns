#ifndef __SHOPING_CART__
#define __SHOPING_CART__

#include <vector>

#include "../product/product.h"
#include "../payment/payment.h"

class ShopingCart {
public:
    ShopingCart();
    ~ShopingCart();

    void addProduct(Product);
    void removeProduct(Product);
    void pay(Payment);
private:
    std::vector<Product> products;
};

#endif//__SHOPING_CART__
