# Игра "Виселица"

## Описание
Этот проект представляет собой консольную реализацию классической игры "Виселица", написанную на языке C++. Игроки пытаются угадать скрытое слово, вводя буквы. Каждая ошибка приближает игрока к "поражению", поскольку фигура виселицы постепенно дорисовывается. Особенности игры:

- Случайный выбор слова из заранее заданного списка.
- ASCII-графика, отображающая процесс игры.
- Простой и интуитивно понятный интерфейс для ввода букв.
- Возможность повторного запуска игры после окончания.

## Особенности
- Слова на русском языке, связанные с позитивной и гуманистической тематикой.
- Визуальная обратная связь о прогрессе и ошибках.
- Удобный игровой цикл.

## Инструкция по запуску

### Требования
Для запуска проекта вам потребуется:
- Компилятор C++ (например, GCC, MSVC).
- Операционная система Windows (проект использует библиотеку `Windows.h` для работы с консолью).

### Шаги для запуска

1. Клонируйте репозиторий или скачайте исходный код.
   ```bash
   git clone <ссылка-на-репозиторий>
   cd <папка-репозитория>
   ```

2. Откройте файл исходного кода (`main.cpp`) в вашем любимом IDE или текстовом редакторе.

3. Скомпилируйте программу. Например, с использованием g++:
   ```bash
   g++ -o hangman main.cpp
   ```

4. Запустите скомпилированный файл:
   ```bash
   ./hangman
   ```

5. Следуйте инструкциям на экране, чтобы играть. Вводите по одной букве, чтобы угадать скрытое слово.

### Примечания
- Игра использует слова на русском языке и поддерживает кириллические символы. Убедитесь, что ваша консоль поддерживает правильную кодировку (Windows Code Page 1251).
- После завершения игры можно перезапустить её, выбрав соответствующую опцию.

## Пример вывода
```
 г----
 |   |
 |     
 |     
 |     
 |     
/ \     

+---+---+---+---+---+---+
|   |   |   |   |   |   |
+---+---+---+---+---+---+
Введите букву: 
```

## Лицензия
Этот проект предоставляется "как есть" и может свободно изменяться или распространяться. Указание авторства приветствуется, но не является обязательным.

