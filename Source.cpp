#include <iostream>
#include <string>
using namespace std;

bool exp(string str);
int sizeStr(string str);
string sub(string str, char sym);

int main() {
	setlocale(LC_ALL, "Russian");
	string str;
	
	// ������ 1
	cout << "������ 1.\n";
	str = "Hello world!";
	cout << str << endl;
	cout << "������� ������: ";
	char sym;
	cin >> sym;
	cin.ignore();
	string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	cout << "����� ������: " << res << ".\n\n";

	// ������ 2
	cout << "������ 2.\n������� ������ ��� �������� �� ���������: ";
	cin >> str;
	cin.ignore();
	if (exp(str))
		cout << "������ �������� �����������." << "\n\n";
	else
		cout << "������ �� �������� �����������." << "\n\n";

	// ������ 3
	cout << "������ 3.\n������� ������, ��������� �� ����� ��������: ";
	getline(cin, str);
	cout << "���������� �������� � ������: " << sizeStr(str) << ".\n\n";

	// ������ 4
	cout << "������ 4.\n������� ������: ";
	getline(cin, str);
	//cin.ignore();
	cout << "������� ������: ";
	char s;
	cin >> s;
	cout << sub(str, s);
	cout << endl;


	return 0;
}
// ������ 2
bool exp(string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	for (int i = 0; i < str.length() / 2; i++)
		if (str[i] == str[str.length() - i - 1])
			return true;
	return false;
}
// ������ 3
int sizeStr(string str) {
	return str.length();
}
// ������ 4
string sub(string str, char sym) {
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym) {
			cout << str.substr(str.rfind(sym));
			break;
		}
	return "";
}