#include <iostream>


system("cls");

while (player < 6 && display < 6) {

    field(a2, b2);
    cout << endl;
    cout << "Ваш ход , вбейте координаты\n";
    cout << "Введите номер столбца:"; cin >> l;
    cout << "Введите номер строки: "; cin >> s;

    if (b[s][l] == "1") {
        player++;
        b2[s][l] = "*";
        cout << endl;
        cout << "вы попали";
    }
    else {
        b2[s][l] = "x";
        cout << "вы промахнулись";
    }

    system("cls");
    field(a2, b2);
    cout << endl;
    cout << "ход противника";
    Sleep(300);
    l = 1;
    while (l != 0) {
        player = rand() % 10;
        display = rand() % 10;

        if (a2[player][display] != "x" && a2[player][display] != "*") {
            if (a[player][display] == "o") {
                bot_heat++;
                a2[player][display] = "*";
                l = 0;
            }
            else {
                a2[player][display] = "x";
                l = 0;
            }
        }
    }
    system("cls");
}

if (display > player) {
    cout << "\t\t\t\t\t\tБот победил!";
}
else {
    cout << "\t\t\t\t\t\tВы победили!";
}
return 0;
}
