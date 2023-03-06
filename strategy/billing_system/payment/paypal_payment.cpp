#include <iostream>

#include "paypal_payment.h"

PaypalPay::PaypalPay(std::string email, std::string password)
    : email(email), password(password) {}

PaypalPay::~PaypalPay() {}

void PaypalPay::pay(int amount) 
{
    std::cout << amount << " paid with Paypal." << std::endl;
}

std::string PaypalPay::getEmail() { return email; }
void PaypalPay::setEmail(std::string email) { this->email = email; }
void PaypalPay::setPassword(std::string password) { this->password = password; }