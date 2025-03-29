#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

// Создание структуры
struct MARCH {
    string first_dot;
    string end_dot;
    int number_of_route;

    // Метод-процедура, выводящая информацию по фильтрации
    void printInfo(string _first_dot, string _end_dot, bool isAllInfo) {
        if (this->first_dot==_first_dot && this->end_dot == _end_dot) {
            cout << endl;
            if (isAllInfo) {
                cout << "Информация по маршруту под номером " << this->number_of_route << endl;
                cout << " - Первая точка маршрута: " << this->first_dot << endl; 
                cout << " - Вторая точка маршрута: " << this->end_dot << endl;
            }
            else {
                cout << "Номер маршрута который вы ищете: " << this->number_of_route;
            }
        }
    }

    // принимаем на вход на ссылку на массив структур и заполняем его, 
    // принимая данные 
    void Input_and_insert_array_of_structure(MARCH (&array_of_structure)[8]) {
        vector<string> strings(3);
        int count = 0;
        int number_route;
        string data;
        for (MARCH &i : array_of_structure) {
            while (count != 3) {
                cin >> data;
                if (count != 2) {
                    strings[count] = data;
                }
                else {
                    number_route = stoi(data);
                }
                count++;
            }
            count = 0;
            MARCH my_attr = {strings[0], strings[1], number_route};
            i = my_attr;
        }

    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    MARCH main_attribute = {"Этот атрибут создан", "для вызова основной логики", 0};
    MARCH _array_of_structure[8];
    main_attribute.Input_and_insert_array_of_structure(_array_of_structure);
    cout << endl;
    string first_filter;
    string second_filter;
    cout << "Введите начальную точку маршрута, который вы хотите найти: ";
    cin >> first_filter;
    cout << "Введите конечную точку маршрута, который вы хотите найти: ";
    cin >> second_filter;
    cout << endl;
    for (MARCH &route : _array_of_structure) {
        route.printInfo(first_filter, second_filter, true);
    }
    return 0;
}
