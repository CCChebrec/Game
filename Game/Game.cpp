#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void showTable(string table)
{
	cout << table << endl;
}

void draw(int err)
{
	if (err == 0)
	{
		cout << " г----" << endl;
		cout << " |   | " << endl;
		cout << " |     " << endl;
		cout << " |     " << endl;
		cout << " |     " << endl;
		cout << " |     " << endl;
		cout << "/ \\     " << endl;
	}
	else if (err == 1)
	{
		cout << " г----" << endl;
		cout << " |   | " << endl;
		cout << " |   0 " << endl;
		cout << " |    " << endl;
		cout << " |    " << endl;
		cout << " |    " << endl;
		cout << "/ \\     " << endl;
	}
	else if (err == 2)
	{
		cout << " г----" << endl;
		cout << " |   | " << endl;
		cout << " |   0 " << endl;
		cout << " |   | " << endl;
		cout << " |    " << endl;
		cout << " |    " << endl;
		cout << "/ \\     " << endl;
	}
	else if (err == 3)
	{
		cout << " г----" << endl;
		cout << " |   | " << endl;
		cout << " |   0 " << endl;
		cout << " |  /| " << endl;
		cout << " |     " << endl;
		cout << " |     " << endl;
		cout << "/ \\     " << endl;
	}
	else if (err == 4)
	{
		cout << " г----" << endl;
		cout << " |   | " << endl;
		cout << " |   0 " << endl;
		cout << " |  /|\\" << endl;
		cout << " |     " << endl;
		cout << " |     " << endl;
		cout << "/ \\     " << endl;
	}
	else if (err == 5)
	{
		cout << " г----" << endl;
		cout << " |   | " << endl;
		cout << " |   0 " << endl;
		cout << " |  /|\\" << endl;
		cout << " |  /   " << endl;
		cout << " |     " << endl;
		cout << "/ \\     " << endl;
	}
	else if (err == 6)
	{
		cout << " г----" << endl;
		cout << " |   | " << endl;
		cout << " |   0 " << endl;
		cout << " |  /|\\" << endl;
		cout << " |  / \\" << endl;
		cout << " |    " << endl;
		cout << "/ \\     " << endl;
	}
}

bool openLetters(string word, string& table, char c)
{
	bool flag = false;
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == c)
		{
			table[i] = c;
			flag = true;
		}
	}
	return flag;
}

char input()
{
	char c;
	cout << "Введите букву: ";
	cin >> c;
	return c;
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);

	string word = "hangman";
	string table = "-------";

	int err = 0;
	while (table != word && err < 6)
	{
		draw(err);
		showTable(table);
		char c = input();
		if (!openLetters(word, table, c))
		{
			err++;
		}
	}
	if (word == table)
	{
		cout << "Вы победили!";
	}
	else
	{
		cout << "Вы проиграли!" << endl;
		draw(err);
	}
	return 0;
}