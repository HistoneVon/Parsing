/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/23 08:48
 */

#ifndef PARSING_PARSER_H
#define PARSING_PARSER_H

#include "GenerateExpression.h"
#include <iostream>
#include <fstream>
#include <vector>

class Parser {
private:
    /*文件*/
    std::ifstream inputGrammar;             //语法输入
    /*语法分析器*/
    std::string lineString;                 //读出的一行语法
    std::vector<GenerateExpression> exps;   //所有产生式
    //增广文法
    GenerateExpression expStart;            //增广文法开始符
    std::vector<Symbol> rightStart;         //增广文法首产生式右部第一个式子（实际上只有一个式子）
    Symbol symbolStart;                     //原文法首符号
public:
//    Parser();

    ~Parser();

    /* 文件操作 */
    bool openInputGrammar(const std::string &fileName);

    void closeInputGrammar();

    /* 1.文法预处理（读文件 增广文法） */
    void pretreatment();
};

#endif //PARSING_PARSER_H
