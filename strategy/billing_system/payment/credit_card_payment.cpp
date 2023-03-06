#include <iostream>

#include "credit_card_payment.h"

CreditCardPay::CreditCardPay(std::string name, std::string card_number)
    : name(name), card_number(card_number) {}

CreditCardPay::~CreditCardPay() {}

void CreditCardPay::pay(int amount)
{
    std::cout << amount << " paid with Card." << std::endl;
}


std::string CreditCardPay::getName() { return this->name; }
void CreditCardPay::setName(std::string name) { this->name = name; }
void CreditCardPay::setCardNumber(std::string card_number) { this->card_number = card_number; }