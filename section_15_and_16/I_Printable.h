#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &output, const I_Printable &rhs);

public:
    virtual void print(std::ostream &output) const = 0;
    ~I_Printable() = default;
};

std::ostream &operator<<(std::ostream &output, const I_Printable &rhs)
{
    rhs.print(output);
    return output;
}

#endif
