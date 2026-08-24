#ifndef _ATM_H_
#define _ATM_H_
#include "IBank.h"
#include <string>

class ATM
{
public:
    ATM(IBank& bank);
    bool insertCard(const std::string& card);
    bool enterPincode(const std::string& code);
    bool selectAccount(int account);
    int getBalance();
    bool deposit(int mount);
    bool withdraw(int mount);

private:
    IBank& bank_;
    std::string card_;
    bool auth_ = false;
    int account_ = -1;
};

#endif //_ATM_H_