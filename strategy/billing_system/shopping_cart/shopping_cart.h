#ifndef __SHOPING_CART__
#define __SHOPING_CART__

#include <list>

#include "../product/product.h"
#include "../payment/payment_i.h"

class ShoppingCart {
public:
    ShoppingCart();
    ~ShoppingCart();

    void addProduct(const Product& p);
    void removeProduct(const Product& p);

    int calculateTotal();

    void pay(IPayment& paymentStrategy);
private:
    std::list<Product> products;
};

#endif//__SHOPING_CART__
