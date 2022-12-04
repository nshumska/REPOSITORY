#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
void RName();
void NamedDishes();
void RRating();
bool isNumber(string rating);
string rating = "";
string name = "";
string Dishes = "";
class institution {
private:
	string name = "None";
	string Dishes = "None";
	int rating = 0;
public:
	institution(string name, string Dishes, int rating) 
	{
		setTitle(name);
		setAuthor(Dishes);
		setRating(rating);
	}
	void setTitle(string name) 
	{
		this->name = name;
	}
	void setAuthor(string Dishes) 
	{
		this->Dishes = Dishes;
	}
	void setRating(int rating) 
	{
		this->rating = rating;
	}
	string getTitle() 
	{
		return name;
	}
	string getAuthor() 
	{
		return Dishes;
	}
	int getRating() 
	{
		return rating;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(CP_UTF8);
	int option;
	wcout << L"Меню:" << endl;
	wcout << L"1.) Введіть назву ресторану:" << endl;
	wcout << L"2.) Введіть назву справи:" << endl;
	wcout << L"3.) Введіть оцінку страви від 1 до 5: " << endl;

	do
	{
		cout << "Оберіть пункт меню:" << endl;
		wcin >> option;

		switch (option)
		{
		case 1:
			RName();
		case 2:
			NamedDishes();
		case 3:
			RRating();
			if (!isNumber(rating))
			{
				rating = "";
				cout << "Ви помилилися. Спробуйте знову." << endl;
			}
		}
	} while (name == "" || Dishes == "" || rating == "");
	if (stoi(rating) > 5)
	{
		rating = "5";
	}
	institution R = institution(name, Dishes, stoi(rating));
	cout << "Назва ресторану: " + R.getTitle() << endl;
	cout << "Назва страви: " + R.getAuthor() << endl;
	cout << "Оцінка страви: " + to_string(R.getRating()) << endl;
	return 0;
}
void RName()
{
	cout << "Введіть назву рестрану:" << endl;
	cin.ignore();
	getline(cin, name);
}
void NamedDishes()
{
	cout << "Введіть назву страви:" << endl;
	cin.ignore();
	getline(cin, Dishes);
}
void RRating()
{
	cout << "Введіть оцінку страви:" << endl;
	cin >> rating;
}
bool isNumber(string rating)
{
	bool isNum = true;
	for (int i = 0; i < rating.length(); i++)
	{
		if (!isdigit(rating[i]))
		{
			isNum = false;
		}
	}
	return isNum;
}