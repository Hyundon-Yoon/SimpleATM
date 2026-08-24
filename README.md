# Simple ATM

## Flow 
Insert Card -> Enter Pincode -> Select Account -> Balance / Deposit / Withdraw

## Structure
```
src/
    ATM.h
    ATM.cpp
    IBack.h
    TestBack.h
test/
    test.cpp
```

## File Description
- ATM.h: Defines the ATM controller interface and session
- ATM.cpp: Implements card insertion, PIN auth, account selection, get balance, deposit, and withdraw
- IBank.h: Defines the bank interface used by the ATM controller
- TestBank.h: Simple bank implementation for testing
- test.cpp: Tests the ATM controller using TestBank

## Design
ATM Controller depends on the 'IBank' interface rather than a concrete bank implementation.

## Test Result
```
>> Insert Card test
>> Insert Card test (N)
>> Enter Pincode
>> Select Account
>> Get Balance
>> Deposit
>> Get Balance After Deposit
>> Withdraw
>> Withdraw
>> Get Balance After Withraw(P)
>> Withdraw
>> Withdraw (N)
tested all function
```