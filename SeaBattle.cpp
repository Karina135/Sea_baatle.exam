#include <iostream>
#include "CreatePlayerField.h"
#include "ActionSetShips.h"
#include "Set.Field.cpp"
#include "Pole.cpp"



int main()
{
  while (true) {
    // Тут  игра
    int** playerField = createPlayerField();
    int** shotsField = createShotsField();
    //actionSetShips(playerField);
    actionDisplayField(playerField);


    void help(short& l, short& s, string(&a2)[10][10], string(&b2)[10][10]) {
        cout << endl;
        cout << "Выберите местоположение ваших кораблей" << endl << "Корабли выставляются по возрастанию , начиная с однопалубного и заканчивая трёхпалубным" << endl;
        cout << "Введите координаты и поставьте знаки " << endl;
        cout << "Знак" << '"' << "^" << '"' << " " << "чтобы корабль стоял носом наверх\n";
        cout << "Знак" << '"' << "<" << '"' << " " << "чтобы корабль стоял носом вправо\n";
        cout << "Знак" << '"' << ">" << '"' << " " << "чтобы корабль стоял носом влево \n";
        cout << "Знак" << '"' << "!" << '"' << " " << "чтобы корабль стоял носом вниз  \n";
        cout << "введите столбик:"; cin >> l;
        cout << "введите строку: "; cin >> s;
        int tu = 10;
        while (tu != 0) {
            tu = 0;
            if (s > 9 || l > 9) {
                tu = 1;
                cout << "\t\t\t\t\t\tНеверные координаты";
                Sleep(2000);
                system("cls");
                field(a2, b2);
                help(l, s, a2, b2);
            }
            else if (s < 0 || l < 0) {
                tu = 1;
                cout << "\t\t\t\t\t\tНеверные координаты";
                Sleep(2000);
                system("cls");
                field(a2, b2);
                help(l, s, a2, b2);
            }

        }
    }




    break;
  }
  
  return 0;
}
