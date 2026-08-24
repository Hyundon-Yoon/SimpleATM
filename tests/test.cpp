#include "ATM.h"
#include "TestBank.h"
#include <iostream>
#include <cassert>

int main()
{
    TestBank bank;
    ATM atm(bank);

    std::cout << ">> Insert Card test" << std::endl;
    assert(atm.insertCard("1234"));

    std::cout << ">> Insert Card test (N)" << std::endl;
    assert(!atm.insertCard("0000"));

    std::cout << ">> Enter Pincode" << std::endl;
    assert(atm.enterPincode("0987"));

    std::cout << ">> Select Account" << std::endl;
    assert(atm.selectAccount(100));

    std::cout << ">> Get Balance" << std::endl;
    assert(atm.getBalance() == 1000);    

    std::cout << ">> Deposit" << std::endl;
    assert(atm.deposit(100));        

    std::cout << ">> Get Balance After Deposit" << std::endl;
    assert(atm.getBalance() == 1100);       

    std::cout << ">> Withdraw" << std::endl;
    assert(atm.withdraw(500));         

    std::cout << ">> Withdraw" << std::endl;
    assert(atm.withdraw(500));       
    
    std::cout << ">> Get Balance After Withraw(P)" << std::endl;
    assert(atm.getBalance() == 100);    
    
    std::cout << ">> Withdraw" << std::endl;
    assert(atm.withdraw(100));          

    std::cout << ">> Withdraw (N)" << std::endl;
    assert(!atm.withdraw(100));        

    std::cout << "tested all function" << std::endl;
    return 0;
}