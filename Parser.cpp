/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/23 08:48
 */

#include "Parser.h"

Parser::Parser() {

}

Parser::~Parser() {
    if (inputGrammar.is_open()) {
        inputGrammar.close();
    }
}

void Parser::parse() {

}

bool Parser::openInputGrammar(const std::string &fileName) {
    inputGrammar.open(fileName);
    if (inputGrammar) {
        std::cout << "Open Grammar Successfully!" << std::endl;
        return true;
    } else {
        std::cout << "Open Grammar Failed." << std::endl;
        return false;
    }
}
