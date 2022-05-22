/**
 * @author fengclchn@outlook.com
 * @createdBy 冯昶霖
 * @date 2022/5/22 22:03
 */

#include "Items.h"
#include <deque>

bool Items::operator==(Items &A) {
    //项集内核项相同即为同一项集
    if (this->kernelItems.size() != A.kernelItems.size()) {
        return false;
    }
    const int n = int(this->kernelItems.size());
    std::deque<bool> visited(n, false);
    for (int i = 0; i < n; ++i) {
        bool flag = false;
        for (int j = 0; j < n; ++j) {
            if (!visited[j] && this->kernelItems[i].wrapperIdx == A.kernelItems[j].wrapperIdx
                && this->kernelItems[i].expIdx == A.kernelItems[j].expIdx
                && this->kernelItems[i].pos == A.kernelItems[j].pos) {
                visited[i] = true;
                flag = true;
            }
        }
        if (!flag) {
            return false;
        }
    }
    return true;
}
