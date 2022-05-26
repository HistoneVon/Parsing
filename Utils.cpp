/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/26 00:05
 */

#include "Utils.h"

void closure(std::vector<GenerateExpression> &exps, Items &items) {
    //求出非内核项
    std::queue<Item> q;//访问队列
    std::unordered_set<std::string> visited;// 被访问过非终结符集合
    for (auto &kernelItem: items.kernelItems) {//将内核项按顺序加入队列
        q.push(kernelItem);
    }
    while (!q.empty()) {//队列空退出
        Item item = q.front();//获得头部
        q.pop();//头部出队
        int wrapperIdx = item.wrapperIdx;//获得头部的参数
        int expIdx = item.expIdx;
        int pos = item.pos;
        if (pos == exps[wrapperIdx].rights[expIdx].size()) {
            //点已经移动到了最后一个，size总比下标大1，而点若在最后一个，相对下标正好是size，尽管这个下标对应的元素并不存在
            continue;
        }
        std::string name = exps[wrapperIdx].rights[expIdx][pos].getName();
        if (visited.find(name) != visited.end()) {
            //已经找了
            continue;
        }
        if (!isupper(name[0])) {
            //不是非终结符
            continue;
        }
        visited.insert(name);//如果不是最后一个位置，且未寻到过，且是非终结符，则加入visited
        for (int j = 0; j < exps.size(); ++j) {
            if (exps[j].getLeft().getName() == name) {//遍历产生式寻找，如果找到左部为该非终结符的
                for (int k = 0; k < exps[j].rights.size(); ++k) {//遍历每一个右部
                    Item itemTemp(j, k, 0);//对每一个右部生成一个项
                    if (exps[j].rights[k][0].getName() == "@") {//空语句直接作为内核项
                        itemTemp.pos = 1;//如果右部是epsilon，则点直接在epsilon右侧
                        items.kernelItems.push_back(itemTemp);//作为内核项，D'->epsilon为内核项
                    } else {
                        items.nonKernelItems.push_back(itemTemp);//如果不是内核项，直接添加至项集，此时点在此非内核项右部的最左边
                    }
                    q.push(itemTemp);//将该项加入队列以便下轮循环分析
                }
                break;
            }
        }
    }
}
