#include <iostream>

using namespace std;

int prob1_1()
{
    cout << "C++" << endl;
    
    return 0; 
}

int prob1_2()
{
    std::cout << "prigramming in C++ Language" << std::endl;
    
    return 0;
}

int prob1_3()
{
    cout << "ONE TWO THREE\nFOUR FIVE SIX" << endl;
    
    return 0;
}

int prob1_4(int multiplier)
{
    int num;

    cout << "数値を入力してください:";
    cin >> num;

    cout << num << "を" << multiplier << "倍した数は，" << num * multiplier << "です．" << endl;
    
    return 0;
}

int prob1_5()
{
    int num1;
    int num2;

    cout << "1つ目の数:";
    cin >> num1;

    cout << "2つ目の数:";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

    return 0;
}

int prob1_6()
{
    string first;
    string last;

    cout << "姓を入力:";
    cin >> last;

    cout << "名を入力:";
    cin >> first;

    cout << "名前は「" << last + first << "」です．" << endl;

    return 0;
}

int prob1_7()
{
    std::cout << "HelloWorld." << std::endl;

    return 0;
}

int main()
{
    prob1_1();
    prob1_2();
    prob1_3();
    prob1_4(2);
    prob1_5();
    prob1_6();
    prob1_7();

    return 0;
}
