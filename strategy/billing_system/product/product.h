#ifndef __PRODUCT__
#define __PRODUCT__

#include <string>

class Product {
public:
    Product(std::string name, std::string upc_code, int price = 0);
    ~Product();
    
    std::string getName();
    void setName(std::string name);
    std::string getUpcCode();
    void setUpcCode(std::string upc_code);
    int getPrice();
    void setPrice(int price);

    bool operator==(const Product& p);
    Product operator=(const Product& p);

private:
    int price;
    std::string upc_code;
    std::string name;
};

#endif//__PRODUCT__