#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
private:
    string author;
    string title;
    string type; // "Художественная" или "Техническая"

public:
    Book(string author, string title, string type) {
        if (author.empty() || title.empty() || type.empty()) {
            throw invalid_argument("Автор, название и тип книги не могут быть пустыми");
        }
        this->author = author;
        this->title = title;
        this->type = type;
    }

    string getType() const {
        return type;
    }

    void display() const {
        cout << "Автор: " << author << ", Название: " << title << ", Тип: " << type << endl;
    }
};

// Функция для подсчета и вывода количества книг по типу с оператором switch
void countBooksSwitch(const vector<Book>& library) {
    int fiction = 0, technical = 0;
    for (const auto& book : library) {
        string type = book.getType();
        if (type == "Художественная") {
            fiction++;
        }
        else if (type == "Техническая") {
            technical++;
        }
    }
    cout << "Количество художественных книг: " << fiction << endl;
    cout << "Количество технических книг: " << technical << endl;
}

// Функция для подсчета и вывода количества книг без оператора switch
void countBooksNoSwitch(const vector<Book>& library) {
    int fiction = 0, technical = 0;
    for (const auto& book : library) {
        fiction += (book.getType() == "Художественная");
        technical += (book.getType() == "Техническая");
    }
    cout << "Количество художественных книг: " << fiction << endl;
    cout << "Количество технических книг: " << technical << endl;
}

int main() {
    vector<Book> library;
    library.emplace_back("Александр Пушкин", "Евгений Онегин", "Художественная");
    library.emplace_back("Лев Толстой", "Война и мир", "Художественная");
    library.emplace_back("Брайан Керниган", "Язык программирования C", "Техническая");
    library.emplace_back("Эндрю Таненбаум", "Компьютерные сети", "Техническая");

    cout << "Книги в библиотеке:\n";
    for (const auto& book : library) {
        book.display();
    }

    cout << "\nСтатистика с оператором switch:\n";
    countBooksSwitch(library);

    cout << "\nСтатистика без оператора switch:\n";
    countBooksNoSwitch(library);

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
private:
    string author;
    string title;
    string type; // "Художественная" или "Техническая"

public:
    Book(string author, string title, string type) {
        if (author.empty() || title.empty() || type.empty()) {
            throw invalid_argument("Автор, название и тип книги не могут быть пустыми");
        }
        this->author = author;
        this->title = title;
        this->type = type;
    }

    string getType() const {
        return type;
    }

    void display() const {
        cout << "Автор: " << author << ", Название: " << title << ", Тип: " << type << endl;
    }
};

// Функция для подсчета и вывода количества книг по типу с оператором switch
void countBooksSwitch(const vector<Book>& library) {
    int fiction = 0, technical = 0;
    for (const auto& book : library) {
        string type = book.getType();
        if (type == "Художественная") {
            fiction++;
        }
        else if (type == "Техническая") {
            technical++;
        }
    }
    cout << "Количество художественных книг: " << fiction << endl;
    cout << "Количество технических книг: " << technical << endl;
}

// Функция для подсчета и вывода количества книг без оператора switch
void countBooksNoSwitch(const vector<Book>& library) {
    int fiction = 0, technical = 0;
    for (const auto& book : library) {
        fiction += (book.getType() == "Художественная");
        technical += (book.getType() == "Техническая");
    }
    cout << "Количество художественных книг: " << fiction << endl;
    cout << "Количество технических книг: " << technical << endl;
}

int main() {
    vector<Book> library;
    library.emplace_back("Александр Пушкин", "Евгений Онегин", "Художественная");
    library.emplace_back("Лев Толстой", "Война и мир", "Художественная");
    library.emplace_back("Брайан Керниган", "Язык программирования C", "Техническая");
    library.emplace_back("Эндрю Таненбаум", "Компьютерные сети", "Техническая");

    cout << "Книги в библиотеке:\n";
    for (const auto& book : library) {
        book.display();
    }

    cout << "\nСтатистика с оператором switch:\n";
    countBooksSwitch(library);

    cout << "\nСтатистика без оператора switch:\n";
    countBooksNoSwitch(library);

    return 0;
}