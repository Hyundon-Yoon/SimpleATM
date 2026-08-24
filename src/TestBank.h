#include "IBank.h"
#include <map>

class TestBank : public IBank
{
public:
    bool checkPincode(const std::string& card, const std::string& code) {
        return pinCode_[card] == code;
    }

    int getBalance(int account) {
        return balance_[account];
    }

    bool deposit(int account, int mount) {
        if (mount <= 0) {
            return false;
        }
        balance_[account] += mount;
        return true;
    }
    bool withdraw(int account, int mount) {
        if (mount <= 0 || balance_[account] < mount) {
            return false;
        }
        balance_[account] -= mount;
        return true;
    }
    std::vector<int> getAccount(const std::string& account) {
        return {100, 200};
    }

private:
    std::map<int, int> balance_{{100, 1000}, {200, 200}};
    std::map<std::string, std::string> pinCode_{{"1234", "0987"}};

};