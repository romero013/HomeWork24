#include <iostream>
#include <string>
using namespace std;

bool exp(string str);
int sizeStr(string str);
string sub(string str, char sym);

int main() {
	setlocale(LC_ALL, "Russian");
	string str;
	
	// Задача 1
	cout << "Задача 1.\n";
	str = "Hello world!";
	cout << str << endl;
	cout << "Введите символ: ";
	char sym;
	cin >> sym;
	cin.ignore();
	string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	cout << "Новая строка: " << res << ".\n\n";

	// Задача 2
	cout << "Задача 2.\nВведите строку для проверки на полиндром: ";
	cin >> str;
	cin.ignore();
	if (exp(str))
		cout << "Строка является полиндромом." << "\n\n";
	else
		cout << "Строка не является полиндромом." << "\n\n";

	// Задача 3
	cout << "Задача 3.\nВведите строку, состоящую из любых символов: ";
	getline(cin, str);
	cout << "Количество символов в строке: " << sizeStr(str) << ".\n\n";

	// Задача 4
	cout << "Задача 4.\nВведите строку: ";
	getline(cin, str);
	//cin.ignore();
	cout << "Введите символ: ";
	char s;
	cin >> s;
	cout << sub(str, s);
	cout << endl;


	return 0;
}
// Задача 2
bool exp(string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	for (int i = 0; i < str.length() / 2; i++)
		if (str[i] == str[str.length() - i - 1])
			return true;
	return false;
}
// Задача 3
int sizeStr(string str) {
	return str.length();
}
// Задача 4
string sub(string str, char sym) {
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym) {
			cout << str.substr(str.rfind(sym));
			break;
		}
	return "";
}