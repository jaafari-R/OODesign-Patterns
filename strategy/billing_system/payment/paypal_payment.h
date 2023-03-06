#ifndef __PAYPAL_PAY__
#define __PAYPAL_PAY__

#include <string>

#include "payment_i.h"

class PaypalPay : public IPayment
{
public:
    PaypalPay(std::string email, std::string password);
    ~PaypalPay();

    void pay(int amount);

    std::string getEmail();
    void setEmail(std::string email);
    void setPassword(std::string password);
private:
    std::string email;
    std::string password;
};

#endif//__PAYPAL_PAY__
