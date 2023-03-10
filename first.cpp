#include <iostream>
#include <vector>

int main(){
    
    // This is a comment
    /*
    This
    is
    a
    comment
    */

    int x; // обьявление
    x = 5; // присвоение
    
    int y = 6;
    int sum = x + y;

    // integer (целые числа)
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (как float в python)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 36.6;

    // лишь одно значение
    char grade = 'A';
    char initial = 'B';
    char dollar = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forsale = true;

    // string (строка)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "Fake St.";

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";

    
    std::cout << initial << "\n";
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";

    std::cout << "I am Oleg and" << "\n";
    std::cout << " I like Pizza!" << "\n";
    
    return 0;
}

namespace first{
    int x = 1; // присвоить одно значение
}

namespace second{
    int x = 2; // присвоить другое значение
}

int general(){
    using namespace first; // использовав  функцию(namespace first) вывести значения этой функции
    //int x = 0;

    //std::cout << first::x;
    std::cout << x;
    std::cout << second::x; 

    return 0;
}

int general_2(){
    using namespace std; // это все
    using std::cout; // это только вывод

    string name = "Bro";

    cout << "Hello " << name;

    return 0;
}

int main_2(){
    double pi = 3.14159;
    const int LIGHT_SPEED = 299345;
    const int WIDTH = 1920;
    const int WEIGHT = 1080;
    //pi = 420.689;
    double radius = 10;
    double dlina_okruzh = 2 * pi * radius;
    
    std::cout << dlina_okruzh << "cm";

    return 0;
}

//typedef std::vector<std::pair<std::string, int>> pairlist; // это просто переменная pairlist
                                                            //внутри которой лежит тип данных
typedef std::string text_t;
typedef int number_t;
using text_t =  std::string;
using number_t = int;

int main_3(){
    
    text_t firstName = "bro";
    number_t age = 21;

    std::cout << age << "\n";
    std::cout << firstName << "\n";

    return 0;

}
