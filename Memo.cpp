//
// Created by millardk on 5/11/19.
//

#include "Memo.h"

uint64_t pow3(int pow)
{
    uint64_t res = 1;
    for(int i = 0; i < pow; i++) {
        res *= 3;
    }
    return res;
}

Memo Memo::makeMemo(int k, int num)
{
    uint64_t cur = num;
    int odds = 0;
    for (int i = 0; i < k; i++)
    {
        if (cur % 2 == 0) {
            cur /= 2;
        } else {
            ++odds;
            cur = (3 * cur + 1) / 2;
        }
    }

    Memo memo;
    memo.c = pow3(odds);
    memo.d = cur;
    return memo;
}


