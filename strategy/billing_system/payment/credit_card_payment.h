#ifndef __CREADIT_CARD_PAY__
#define __CREADIT_CARD_PAY__

#include <string>

#include "payment_i.h"

class CreditCardPay : public IPayment
{
public:
    CreditCardPay(std::string name, std::string card_number);
    ~CreditCardPay();

    void pay(int amount);

    std::string getName();
    void setName(std::string name);
    void setCardNumber(std::string card_number);
private:
    std::string name;
    std::string card_number;
};

#endif//__CREADIT_CARD_PAY__
