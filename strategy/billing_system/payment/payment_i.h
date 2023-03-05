#ifndef __I_PAYMENT__
#define __I_PAYMENT__

class IPayment
{
public:
    IPayment();
    ~IPayment();

    void pay(int amount);
private:
};

#endif//__I_PAYMENT__
