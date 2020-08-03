#ifndef _INSUFFICIENTFUNDSEXCEPTION_H_
#define _INSUFFICIENTFUNDSEXCEPTION_H_
#include <exception>

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() = default;
    virtual const char *what() const throw()
    {
        return "You don't have enough funds to make this transaction";
    }
    ~InsufficientFundsException() = default;
};

#endif
