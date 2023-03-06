#ifndef __I_PAYMENT__
#define __I_PAYMENT__

class IPayment
{
public:
    virtual void pay(int amount) = 0;
private:
};

#endif//__I_PAYMENT__
