#ifndef __PAYPAL_PAY__
#define __PAYPAL_PAY__

#include <string>

#include "payment_i.h"

class PaypalPay : public IPayment
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
