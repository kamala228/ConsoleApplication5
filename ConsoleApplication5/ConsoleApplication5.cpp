#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("chcp 1251>null");
    float total = 0, num;
    int piza, pizac, napoi, napoic;


    cout << "Меню:\n";
    cout << "Пиццы:\n";
    cout << "1 - Моцарелла - 2$\n";
    cout << "2 - 4 сыра - 3$\n";
    cout << "3 - Карбонара - 3$\n";
    cout << "Напитки:\n";
    cout << "1 - Чай - 0.5$\n";
    cout << "2 - Молочный коктейль - 1$\n";


    cout << "Введите код пиццы, которую хотите заказать: ";
    cin >> piza;
    cout << "Введите количество пицц: ";
    cin >> pizac;


    if (piza < 1 || piza > 3 || pizac < 0) {
        cout << "Некорректный ввод для пиццы.\n";
        return 1;
    }


    cout << "Введите код напитка, который хотите заказать: ";
    cin >> napoi;
    cout << "Введите количество напитков: ";
    cin >> napoic;


    if (napoi < 1 || napoi > 2 || napoic < 0) {
        cout << "Некорректный ввод для напитков.\n";
        return 1;
    }


    float pizza_price = (piza == 1) ? 2 : 3;
    float drink_price = (napoi == 1) ? 0.5 : 1;


    int free_pizzas = pizac / 4;
    float pizza_total = (pizac - free_pizzas) * pizza_price;


    float drink_total = napoic * drink_price;
    if (drink_price > 2 && napoic > 2) {
        num = drink_total / 100 * 15;
        drink_total = drink_total - num;

    }


    total = pizza_total + drink_total;


    if (total > 50) {
        num = total / 100 * 20;
        total -= num;
    }


    cout << fixed << setprecision(2);
    cout << "Чек:\n";
    cout << "Пиццы:\n";
    if (piza == 1) cout << "Моцарелла - " << pizac << " шт - " << pizza_total << "$\n";
    if (piza == 2) cout << "4 сыра - " << pizac << " шт - " << pizza_total << "$\n";
    if (piza == 3) cout << "Карбонара - " << pizac << " шт - " << pizza_total << "$\n";

    cout << "Напитки:\n";
    if (napoi == 1) cout << "Чай - " << napoic << " шт - " << drink_total << "$\n";
    if (napoi == 2) cout << "Молочный коктейль - " << napoic << " шт - " << drink_total << "$\n";

    cout << "Итого к оплате: " << total << "$\n";

    return 0;
}
