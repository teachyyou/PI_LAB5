#include <iostream>
#include "hanoi.h"


int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    int start_peg, destination_peg, buffer_peg, plate_quantity;
    cout << "Введите количество дисков:" << endl;
    cin >> plate_quantity;
    cout << "Введите номер первого столбика:" << endl;
    cin >> start_peg;
    cout << "Введите номер конечного столбика:" << endl;
    cin >> destination_peg;
    cout << "Введите номер промежуточного столбика:" << endl;
    cin >> buffer_peg;
    cout << "Последовательность перекладываний, необходимая для решения задачи:" << endl;
    hanoi_towers(plate_quantity, start_peg, destination_peg, buffer_peg);
    return 0;
}