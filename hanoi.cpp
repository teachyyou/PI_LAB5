#include "hanoi.h"

void hanoi_towers(int k, int from, int work, int to)
{
    if (k == 0) return;

    hanoi_towers(k - 1, from, to, work);

    cout << from << " -> " << to << endl;

    hanoi_towers(k - 1, work, from, to);
}