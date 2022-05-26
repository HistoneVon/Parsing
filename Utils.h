/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/26 00:05
 */

#ifndef PARSING_UTILS_H
#define PARSING_UTILS_H

#include "GenerateExpression.h"
#include "Item.h"
#include "Items.h"
#include <string>
#include <vector>
#include <queue>
#include <unordered_set>

/*
 * @proc 求出items所有非内核项，并且填入项集items
 * @params exps:所有生成式 items:内核项已经填好的项集
 * @return void
*/
void closure(std::vector<GenerateExpression> &exps, Items &items);

/*
 * @proc 求出项集所有下一项（点的下一个符号）名称，放到names里面
 * @params exps:所有生成式 items:所求项集 names:为符号名称
 * @return void
*/
void getAllNames(std::vector<GenerateExpression> &exps, Items &items, std::vector<std::string> &names);

#endif //PARSING_UTILS_H