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
 * @param exps:所有生成式 items:内核项已经填好的项集
 * @return void
*/
void closure(std::vector<GenerateExpression> &exps, Items &items);

#endif //PARSING_UTILS_H
