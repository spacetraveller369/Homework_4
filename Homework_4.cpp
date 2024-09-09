// Homework_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <ctime>

int main()
{
	//1.С клавиатуры вводится целое число.Вывести на экран все числа, на которые введённое число делится без остатка.
	// Например, для 60 такими числами станут 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60.
    
   /* setlocale(LC_ALL, "RUS");

    int number;

    std::cout << "Введите целое число: ";
    std::cin >> number;

    std::cout << "Числа, на которые " << number << " делится без остатка: ";

    for (int i = 1; i <= number; ++i) 
    {
        if (number % i == 0) 
        {
            std::cout << i << " ";  
        }
    }

    std::cout << ("\n");
    return 0; 

    // 2.Написать игру «Угадай число». 
    // Пользователь мысленно загадывает число от 0 до 1000, компьютер отгадывает его за минимальное количество попыток.

    setlocale(LC_ALL, "RUS");

    int low = 0;  
    int high = 1000; 
    int guess;  
    char response;  
    int attempts = 0;  

    std::cout << "Загадайте число от 0 до 1000, а компьютер попытается его отгадать.\n";

    
    while (low <= high) 
    {
        
        guess = low + (high - low) / 2;
        attempts++;

        std::cout << "Ваше число " << guess << "? (введите '>' если больше, '<' если меньше, '=' если угадано): ";
        std::cin >> response;

        if (response == '=') 
        {
            std::cout << "Компьютер угадал ваше число за " << attempts << " попыток!\n";
            break;
        }

        else if (response == '>') 
        {
            low = guess + 1;  
        }

        else if (response == '<') 
        {
            high = guess - 1;  
        }

        else 
        {
            std::cout << "Некорректный ввод. Попробуйте снова.\n";
        }
    }

    return 0; 

    //3.Ежемесячная стипендия студента составляет N гривен, а расходы на проживание превышают стипендию и составляют M гривен в месяц.
    // Рост цен ежемесячно увеличивает расходы на 3 % .Составьте программу расчёта суммы денег, которую необходимо единовременно попросить у родителей, 
    // чтобы можно было прожить учебный год(10 месяцев), используя только эти деньги и стипендию.

    setlocale(LC_ALL, "RUS");

    double N, M, totalMoneyNeeded = 0;
    double monthlyExpense;

    std::cout << "Введите размер стипендии (N): ";
    std::cin >> N;

    std::cout << "Введите начальные расходы на проживание (M): ";
    std::cin >> M;

    
    for (int month = 1; month <= 10; ++month) 
    {
        monthlyExpense = M * pow(1.03, month - 1);  
        totalMoneyNeeded += (monthlyExpense - N);  
    }

    std::cout << "Необходимая сумма, которую нужно попросить у родителей: "
        << totalMoneyNeeded << " гривен." << ("\n");

    return 0; 

    //4.Написать программу, которая генерирует календарь на любой год, указанный с клавиатуры.

    bool isLeapYear(int year) 
    
    {
        return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
    }

    void printMonth(const std::string & name, int days, int& startDay) 
    {
        std::cout << "\n  " << name << "\n";
        std::cout << "  Mon  Tue  Wed  Thu  Fri  Sat  Sun\n";

        for (int i = 0; i < startDay; ++i)
        {
            std::cout << "     ";  
        }

        for (int day = 1; day <= days; ++day) 
        {
            std::cout << std::setw(5) << day;
            if (++startDay == 7) 
            {  
                std::cout << "\n";
                startDay = 0;
            }
        }
        if (startDay != 0) 
        {
            std::cout << "\n";
        }
    }

    void generateCalendar(int year) {
        std::string months[] = { "January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December" };
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        if (isLeapYear(year))
        {
            daysInMonth[1] = 29;
        }

        
        std::tm time_in = { 0, 0, 0, 1, 0, year - 1900 };  
        std::mktime(&time_in);
        int startDay = time_in.tm_wday; 
        if (startDay == 0) 
        {  
            startDay = 6;
        }
        else
        {
            --startDay;  
        }

        
        for (int i = 0; i < 12; ++i) {
            printMonth(months[i], daysInMonth[i], startDay);
        }
    }

    int main() 
    {
        int year;
        std::cout << "Введите год: ";
        std::cin >> year;

        std::cout << "\nКалендарь на " << year << " год:\n";
        generateCalendar(year);

        return 0; */
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
