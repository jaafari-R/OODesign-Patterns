#ifndef __PRODUCT__
#define __PRODUCT__

#include <string>

class Product {
public:
    Product(int price = 0);
    ~Product();


    int getPrice();
    void setPrice(int price);

private:
    int price;
    std::string upc_code;
};

#endif//__PRODUCT__