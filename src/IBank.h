#ifndef _IBANK_H_
#define _IBANK_H_
#include <string>
#include <vector>

class IBank
{
public:
    virtual ~IBank() = default;

    virtual bool checkPincode(const std::string& card, const std::string& code) = 0;
    virtual int getBalance(int mount) = 0;
    virtual bool deposit(int account, int mount) = 0;
    virtual bool withdraw(int account, int mount) = 0;
    virtual std::vector<int> getAccount(const std::string& account) = 0;
};

#endif //_IBANK_H_