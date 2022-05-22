/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/22 21:34
 */

#ifndef PARSING_GENERATEEXPRESSION_H
#define PARSING_GENERATEEXPRESSION_H

#include "Symbol.h"
#include <vector>

class GenerateExpression {
private:
    Symbol left;                //产生式左部
    std::vector<std::vector<Symbol>> rights; //产生式右部
    //一个左部对应多个产生式，用两层vector来存储
public:
//    GenerateExpression();//TODO 用一个字符串处理成这个
};

#endif //PARSING_GENERATEEXPRESSION_H
