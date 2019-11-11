#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void ex1()
{
    char c;
    for (c = 33; c < 120; ++c)
    {
        std::cout << c << std::endl;
    }
}

void ex2()
{
    std::cout << (int)'a' << ' ' << (int)'A' << std::endl;
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        std::cout << c << std::endl;
    }
}

void ex3 ()
{
    int n;
    std::string g;

    std::cin >> n;
    getline(std::cin, g);
}

void ex4 ()
{
    std::fstream file;
    file.open ("input.txt");
    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
}

void ex5 ()
{
    std::stringstream ss;
    ss << "22";
    int k = 0;
    ss >> k;
    std::cout << k << std::endl;
}

void ex6 ()
{
    char A = 'A', b = 'b', d = '5', s = ' ';
    std::cout << isspace(s) << std::endl;
    std::cout << isdigit(d) << std::endl;
    std::cout << isalpha(A) << std::endl;
    std::cout << isupper(A) << std::endl;
    std::cout << islower(b) << std::endl;
    std::cout << std::stoi("123") << std::endl;
    // naive digit conversion
    std::cout << '9' - '0' << std::endl;
    char line_break = '\n';
    std::cout << isspace(line_break) << std::endl;


}

int main ()
{
    ex6();
}

