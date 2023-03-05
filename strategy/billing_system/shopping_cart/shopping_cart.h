#ifndef __SHOPING_CART__
#define __SHOPING_CART__

#include <vector>

#include "../product/product.h"
#include "../payment/payment_i.h"

class ShopingCart {
public:
    ShopingCart();
    ~ShopingCart();

    void addProduct(Product);
    void removeProduct(Product);
    void pay(IPayment);
private:
    std::vector<Product> products;
};

#endif//__SHOPING_CART__
