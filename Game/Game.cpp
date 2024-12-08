#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void drawLine(int n)
{
	for (int i = 0; i < n; i++)
		cout << "+---";
	cout << "+\n";

}

void showTable(string table)
{
	drawLine(table.size());
	cout << "| ";
	for (int i = 0; i < table.size(); i++)
	{
		cout << table[i] << " | ";
	}
	cout << "\n";
	drawLine(table.size());
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

string randomWord()
{
	vector<string> words
	{
		"дружба","любовь","счастье","гуманизм","сострадание","мир","позитив","доверие","красота","природа"
	};
	int r = rand() % words.size();
	return words[r];
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	srand(time(0));
	char flag = '&';
	while (flag == '&')
	{
		string word = randomWord();
		string table(word.size(), ' ');

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
			system("cls");
		}
		draw(err);
		showTable(table);
		if (word == table)
		{
			cout << "Вы победили!" << endl;
		}
		else
		{
			cout << "Вы проиграли!" << endl;
		}
		cout << "нажмите любую клавишу";
		cin.get();
		cin.get();
		system("cls");
		cout << "Хотите сыграть ещё раз?(& - да, любой другой символ - нет)";
		cin >> flag;
	}
	cin.get();
	cin.get();
	return 0;
}