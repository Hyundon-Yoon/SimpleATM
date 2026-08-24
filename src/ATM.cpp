#include "ATM.h"

ATM::ATM(IBank& bank) : bank_(bank)
{
}


bool ATM::insertCard(const std::string& card)
{
    if (!card_.empty())
    {
        return false;
    }

    card_ = card;
    auth_ = false;
    account_ = -1;

    return true;
}

bool ATM::enterPincode(const std::string& code)
{
    if (card_.empty())
    {
        return false;
    }

    auth_ = bank_.checkPincode(card_, code);
    return auth_;
}

bool ATM::selectAccount(int account)
{
    if (!auth_)
    {
        return false;
    }

    account_ = account;
    return true;
}

int ATM::getBalance()
{
    if (account_ == -1)
    {
        return -1;
    }

    return bank_.getBalance(account_);
}

bool ATM::deposit(int mount)
{
    if (account_ == -1)
    {
        return false;
    }

    return bank_.deposit(account_, mount);
}

bool ATM::withdraw(int mount)
{
    if (account_ == -1)
    {
        return false;
    }

    return bank_.withdraw(account_, mount); 
}