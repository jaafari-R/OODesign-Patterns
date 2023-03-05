#ifndef __PAYPAL_PAY__
#define __PAYPAL_PAY__

#include <string>

class PaypalPay
{
public:
    PaypalPay();
    ~PaypalPay();

    void pay(int amount);
private:
    std::string email;
    std::string password;
};

#endif//__PAYPAL_PAY__
