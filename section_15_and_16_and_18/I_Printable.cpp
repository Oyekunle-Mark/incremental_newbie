#include <iostream>
#include "I_Printable.h"

std::ostream &operator<<(std::ostream &output, const I_Printable &rhs)
{
    rhs.print(output);
    return output;
}
