#ifndef _ILLEGALBALANCEEXCPEPTION_H_
#define _ILLEGALBALANCEEXCPEPTION_H_
#include <exception>

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() = default;
    virtual const char *what() const throw()
    {
        return "Cannot create an account with a negative balance";
    }
    ~IllegalBalanceException() = default;
};

#endif
