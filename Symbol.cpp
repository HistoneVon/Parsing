/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/22 20:41
 */

#include "Symbol.h"

Symbol::Symbol(const std::string& n, int t) {
    name = n;
    type = t;
}

bool Symbol::operator==(Symbol &A) {
    return this->name == A.name;
}

bool Symbol::operator!=(Symbol &A) {
    return this->name != A.name;
}


