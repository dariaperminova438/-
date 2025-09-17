#include <iostream>
#include <vector>
#include <string>
#include <stack>

int main() {
    // Создание массива строк с разными значениями
    std::vector<std::string> string_list = {"apple", "banana", "cherry", "lemon"};

    // Организация стека целых чисел
    std::stack<int> number_stack;

    // Добавление нескольких элементов в стек
    number_stack.push(10);    // [10]
    number_stack.push(20);    // [10, 20]
    number_stack.push(30);    // [10, 20, 30]
    number_stack.push(40);    // [10, 20, 30, 40]

    // Удаление двух элементов из стека
    int top_element = number_stack.top();  // получаем верхний элемент (40)
    number_stack.pop();                    // удаляем его из стека
    
    int second_element = number_stack.top(); // получаем следующий элемент (30)
    number_stack.pop();                    // удаляем его из стека

    std::cout << "Верхний элемент: " << top_element << std::endl;
    std::cout << "Следующий элемент: " << second_element << std::endl;
    std::cout << "Размер стека после двух pop: " << number_stack.size() << std::endl;
    std::cout << "Текущий верхний элемент: " << number_stack.top() << std::endl;

    return 0;
}
