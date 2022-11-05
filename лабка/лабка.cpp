


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
// ПІБ
string studentFullName = "Наруто Удзумакi";
// Ідентифiкатор книжки міссії
unsigned int studentID = 777;
// Вiк 
unsigned short int studentAge = 18;
// Рiк служби 
unsigned short int currentStudyYear = 2;
// Чи ходить на мiссiї ?
bool isStuding = true;
// Адреса прописки студента
string originAddress = "Коноха, Мiстечко Прихованого листа";
// Статус в мiчтечку
string degree = "Хокаге";
// Навчальна група
unsigned int totalMemoryInBytes = sizeof(studentFullName) +


sizeof(studentID) +
sizeof(studentAge) +
sizeof(currentStudyYear) +
sizeof(isStuding) +
sizeof(originAddress) +
sizeof(degree);
cout << "ПIБ :\t" << studentFullName << endl;
cout << "Номер запису мiссiї:\t" << studentID << endl;
cout << "Вiк :\t" << studentAge << endl;
cout << "Рiк служби:\t" << currentStudyYear << endl;
cout << "Чи ходить на мiссiї ?:\t" << ((isStuding) ? "Так" : "Ні") << endl;
cout << "Адреса:\t" << originAddress << endl;
cout << "Статус в мiстечку:\t" << degree << endl;
cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

totalMemoryInBytes << endl;
}