#include <iostream>

using namespace std;

//Товары
string tovar1 = "Кефир";
string tovar2 = "Молоко";
string tovar3 = "Сливки";
string tovar4 = "Энергетик";
string tovar5 = "ЧУПА ЧУПС";
string tovar6 = "ХУБА БУБА";

//количество
int tov1 = 10, tov2 = 10, tov3 = 10, tov4 = 10, tov5 = 10, tov6 = 10;

//Цена
int cena1 = 69, cena2 = 59, cena3 = 89, cena4 = 49, cena5 = 19, cena6 = 39;


int main()
{
	//Товары
	string tovar1 = "Кефир";
	string tovar2 = "Молоко";
	string tovar3 = "Сливки";
	string tovar4 = "Энергетик";
	string tovar5 = "ЧУПА ЧУПС";
	string tovar6 = "ХУБА БУБА";

	//количество
	int tov1 = 10, tov2 = 10, tov3 = 10, tov4 = 10, tov5 = 10, tov6 = 10;

	//Цена
	int cena1 = 69, cena2 = 59, cena3 = 89, cena4 = 49, cena5 = 19, cena6 = 39;

	//массив с ценой
	int cena[6] = { cena1,cena2,cena3,cena4,cena5,cena6 };
	//маcсив с количеством товаров
	int kol_vo[6] = { tov1,tov2,tov3,tov4,tov5,tov6 };
	//массив с товаром
	string tovar[6] = { tovar1,tovar2,tovar3,tovar4,tovar5,tovar6 };

	int vibor = 1, korzina = 0, obshaya_korzina = 0;
	//счетчик товаров
	int pokypki1 = 0, pokypki2 = 0, pokypki3 = 0, pokypki4 = 0, pokypki5 = 0, pokypki6 = 0;

	int pobeg;
	setlocale(LC_ALL, "");
	 
	cout << "Кассовый аппарат" << endl;
	cout << "     Товар: " << tovar1 << "    " << tovar2 << "    " << tovar3 << "    " << tovar4 << "    " << tovar5 << "    " << tovar6 << endl;
	cout << "Количество: " << tov1 << "    " << tov2 << "    " << tov3 << "    " << tov4 << "    " << tov5 << "    " << tov6 << endl;
	cout << " Стоимость: " << cena1 << "    " << cena2 << "    " << cena3 << "    " << cena4 << "    " << cena5 << "    " << cena6 << endl;
	cout << endl;
	cout << "Привет что хочешь купить? (1,2,3,4,5,6 | 0 - выход)" << endl;

	while (vibor != 0) {
	cin >> vibor;
		switch (vibor)
		{
		case(0):
			if (korzina == 0) {
				cout << "Вы плохой человек" << endl;
				break;
			}
			else {
				cout << "\t Чек \t" << endl;
				cout << "Молоко: " << pokypki1 << " шт." << "на стоимость: " << pokypki1*69 << endl;
				cout << "Кефир: " << pokypki2 << " шт." << "на стоимость: " << pokypki2*59 << endl;
				cout << "Сливки: " << pokypki3 << " шт." << "на стоимость: " << pokypki3*89 << endl;
				cout << "Энергетик: " << pokypki4 << " шт." << "на стоимость: " << pokypki4*49 << endl;
				cout << "ЧУПА ЧУПС: " << pokypki5 << " шт." << "на стоимость: " << pokypki5*19 << endl;
				cout << "ХУБА БУБА: " << pokypki6 << " шт." << "на стоимость: " << pokypki6*39 << endl;

				cout << "Общая стоимость: " << korzina << endl;
				obshaya_korzina += korzina;

				cout << "Убежать с товаром?" << endl;
				cin >> pobeg;
				if (pobeg == 1) {
					cout << "Поздравляю вы убежали! " << endl;
					break;
				}
				else {
					cout << "Вы трус!" << endl;
					break;
				}

			}
		case(1):
			if (tov1 > 0) {
				tov1 -= 1;
				pokypki1++;
				if (tov1 == 0) {
					tovar1 = "";
					cena1 = '\0';
					tov1 = '\0';
				}
				if (pokypki1 <= 4) {
					cena1 *= 1;
				}
				else if (pokypki1 >= 5 and pokypki1 <= 7) {
					cena1 *= 0.9;
				}
				else if (pokypki1 >= 8 and pokypki1 <= 10) {
					cena1 *= 0.8;
				}
				korzina += cena1;
				cout << "     Товар: " << tovar1 << "    " << tovar2 << "    " << tovar3 << "    " << tovar4 << "    " << tovar5 << "    " << tovar6 << endl;
				cout << "Количество: " << tov1 << "    " << tov2 << "    " << tov3 << "    " << tov4 << "    " << tov5 << "    " << tov6 << endl;
				cout << " Стоимость: " << cena1 << "    " << cena2 << "    " << cena3 << "    " << cena4 << "    " << cena5 << "    " << cena6 << endl;
				cout << endl;
				cout << "В корзине товаров на " << korzina << endl;
				cout << "Что ещё?" << endl;
			}
			else
				cout << "Нельзя приобрести данный товар" << endl;
			break;
		case(2):
			if (tov2 > 0) {
				
				tov2 -= 1;
				pokypki2++;
				if (tov2 == 0) {
					tovar2 = "";
					cena2 = '\0';
					tov2 = '\0';

				}
				if (pokypki2 <= 4) {
					cena2 *= 1;
				}
				else if (pokypki2 >= 5 and pokypki2 <= 7) {
					cena2 *= 0.9;
				}
				else if (pokypki2 >= 8 and pokypki2 <= 10) {
					cena2 *= 0.8;
				}
				korzina += cena2;
				cout << "     Товар: " << tovar1 << "    " << tovar2 << "    " << tovar3 << "    " << tovar4 << "    " << tovar5 << "    " << tovar6 << endl;
				cout << "Количество: " << tov1 << "    " << tov2 << "    " << tov3 << "    " << tov4 << "    " << tov5 << "    " << tov6 << endl;
				cout << " Стоимость: " << cena1 << "    " << cena2 << "    " << cena3 << "    " << cena4 << "    " << cena5 << "    " << cena6 << endl;
				cout << endl;
				cout << "В корзине товаров на " << korzina << endl;
				cout << "Что ещё?" << endl;
			}
			else
				cout << "Нельзя приобрести данный товар";
			break;
		case(3):
			if (tov3 > 0) {
				
				tov3 -= 1;
				pokypki3++;
				if (tov3 == 0) {
					tovar3 = "";
					cena3 = '\0';
					tov3 = '\0';

				}
				if (pokypki3 <= 4) {
					cena3 *= 1;
				}
				else if (pokypki3 >= 5 and pokypki3 <= 7) {
					cena3 *= 0.9;
				}
				else if (pokypki3 >= 8 and pokypki3 <= 10) {
					cena3 *= 0.8;
				}
				korzina += cena3;
				cout << "     Товар: " << tovar1 << "    " << tovar2 << "    " << tovar3 << "    " << tovar4 << "    " << tovar5 << "    " << tovar6 << endl;
				cout << "Количество: " << tov1 << "    " << tov2 << "    " << tov3 << "    " << tov4 << "    " << tov5 << "    " << tov6 << endl;
				cout << " Стоимость: " << cena1 << "    " << cena2 << "    " << cena3 << "    " << cena4 << "    " << cena5 << "    " << cena6 << endl;
				cout << endl;
				cout << "В корзине товаров на " << korzina << endl;
				cout << "Что ещё?" << endl;
			}
			else
				cout << "Нельзя приобрести данный товар";
			break;
		case(4):
			if (tov4 > 0) {
			
				tov4 -= 1;
				pokypki4++;
				if (tov4 == 0) {
					tovar4 = "";
					cena4 = '\0';
					tov4 = '\0';

				}
				if (pokypki4 <= 4) {
					cena4 *= 1;
				}
				else if (pokypki4 >= 5 and pokypki4 <= 7) {
					cena4 *= 0.9;
				}
				else if (pokypki4 >= 8 and pokypki4 <= 10) {
					cena4 *= 0.8;
				}
				korzina += cena4;
				cout << "     Товар: " << tovar1 << "    " << tovar2 << "    " << tovar3 << "    " << tovar4 << "    " << tovar5 << "    " << tovar6 << endl;
				cout << "Количество: " << tov1 << "    " << tov2 << "    " << tov3 << "    " << tov4 << "    " << tov5 << "    " << tov6 << endl;
				cout << " Стоимость: " << cena1 << "    " << cena2 << "    " << cena3 << "    " << cena4 << "    " << cena5 << "    " << cena6 << endl;
				cout << endl;
				cout << "В корзине товаров на " << korzina << endl;
				cout << "Что ещё?" << endl;
			}
			else
				cout << "Нельзя приобрести данный товар";
			break;
		case(5):
			if (tov5 > 0) {
				
				tov5 -= 1;
				pokypki5++;
				if (tov5 == 0) {
					tovar5 = "";
					cena5 = '\0';
					tov5 = '\0';

				}
				if (pokypki5 <= 4) {
					cena5 *= 1;
				}
				else if (pokypki5 >= 5 and pokypki5 <= 7) {
					cena5 *= 0.9;
				}
				else if (pokypki5 >= 8 and pokypki5 <= 10) {
					cena5 *= 0.8;
				}
				korzina += cena5;
				cout << "     Товар: " << tovar1 << "    " << tovar2 << "    " << tovar3 << "    " << tovar4 << "    " << tovar5 << "    " << tovar6 << endl;
				cout << "Количество: " << tov1 << "    " << tov2 << "    " << tov3 << "    " << tov4 << "    " << tov5 << "    " << tov6 << endl;
				cout << " Стоимость: " << cena1 << "    " << cena2 << "    " << cena3 << "    " << cena4 << "    " << cena5 << "    " << cena6 << endl;
				cout << endl;
				cout << "В корзине товаров на " << korzina << endl;
				cout << "Что ещё?" << endl;
			}
			else
				cout << "Нельзя приобрести данный товар";
			break;
		case(6):
			if (tov6 > 0) {
				
				tov6 -= 1;
				pokypki6++;
				if (tov6 == 0) {
					tovar6 = "";
					cena6 = '\0';
					tov6 = '\0';

				}
				if (pokypki6 <= 4) {
					cena6 *= 1;
				}
				else if (pokypki6 >= 5 and pokypki6 <= 7) {
					cena6 *= 0.9;
				}
				else if (pokypki6 >= 8 and pokypki6 <= 10) {
					cena6 *= 0.8;
				}
				korzina += cena6;

				cout << "     Товар: " << tovar1 << "    " << tovar2 << "    " << tovar3 << "    " << tovar4 << "    " << tovar5 << "    " << tovar6 << endl;
				cout << "Количество: " << tov1 << "    " << tov2 << "    " << tov3 << "    " << tov4 << "    " << tov5 << "    " << tov6 << endl;
				cout << " Стоимость: " << cena1 << "    " << cena2 << "    " << cena3 << "    " << cena4 << "    " << cena5 << "    " << cena6 << endl;
				cout << endl;
				cout << "В корзине товаров на " << korzina << endl;
				cout << "Что ещё?" << endl;
			}
			else
				cout << "Нельзя приобрести данный товар";
			break;
		}		
	}

}
