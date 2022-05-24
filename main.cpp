#include "Parser.h"

int main() {
    //实例化
    Parser parser;
    bool inputGrammarIsOpen = parser.openInputGrammar("grammar.txt");
    if (!inputGrammarIsOpen) {
        return -1;
    }
    parser.pretreatment();
    parser.closeInputGrammar();
    return 0;
}
