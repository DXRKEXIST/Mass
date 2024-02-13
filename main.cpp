#include <iostream>
#include <ctime> // Добавляем заголовочный файл для функции time()

using namespace std;

int main() {
    srand(time(NULL));

    int mas1[6] = {5, 0, -2, 0, 17, 8};
    cout << endl << endl;
    cout << "Масив mas1: ";
    cout << mas1[0] << ' ' <<
        mas1[4] << ' ' << mas1[2];

    int mas2[4];

    mas2[0] = 100;
    mas2[3] = 200;

    cout << endl << endl;
    cout << "Масив mas2: ";
    cout << mas2[0] << ' ' <<
        mas2[1] << ' ' << mas2[2] << ' ' << mas2[3];

    cout << endl << endl;
    char symbols[7] = {'W', 'h', '$', '@', 'W', '*', '!'};
    cout << "Масив symbols: ";
    for (int i = 0; i < 7; i++) {
        cout << symbols[i] << ' ';
    }

    int mas3[10];
    for (int i = 0; i < 10; i++) {
        mas3[i] = rand() % 100;
    }

    cout << endl << endl;
    cout << "Масив mas3: ";
    for (int i = 0; i < 10; i++) {
        cout << mas3[i] << ' ';
    }

    return 0;
}