/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/23 08:48
 */

#ifndef PARSING_PARSER_H
#define PARSING_PARSER_H

#include <iostream>
#include <fstream>

class Parser {
private:
    /*文件*/
    std::ifstream inputGrammar;
public:
    Parser();

    ~Parser();

    /*文件操作*/
    bool openInputGrammar(const std::string &fileName);

    void parse();
};

#endif //PARSING_PARSER_H
