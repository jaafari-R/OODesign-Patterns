#include <vector>

#include "product/product.h"
#include "shopping_cart/shopping_cart.h"
#include "payment/credit_card_payment.h"
#include "payment/paypal_payment.h"

std::vector<Product> initProducts();

int main()
{
    ShoppingCart sc;
    
    std::vector<Product> products = initProducts();

    for(const auto& product: products)
        sc.addProduct(product);

    // Use different Payment Strategies
    std::string credit_card_name = "Ramadan";
    std::string credit_card_number = "1234";
    CreditCardPay credit_card_pay_strategy(credit_card_name, credit_card_number);
    sc.pay(credit_card_pay_strategy);



    return 0;
}

std::vector<Product> initProducts()
{
    std::vector<Product> products;

    products.push_back(Product("Pen", "1", 1));
    products.push_back(Product("Shirt", "2", 5));
    products.push_back(Product("Jacket", "3", 10));
    products.push_back(Product("Monitor", "4", 100));

    return products;
}