#include <iostream>
#include <list>  
#include <vector>
/*
1)

class Point
{
private:
    int x;
    int y;
public:
    Point() {
        std::cout <<"Pointのコンストラクタ\n";
    } 
   ~Point() {
       std::cout << "Pointのデストラクタ\n";
   } 
};
int main()
{
    Point point;

    std::cout << "main関数だよ\n";

    return 0;
}

2)

int main() 
{
    int* newInt = new int;

    char* newchar = new char;

    printf("newInt = %d\n", *newInt);
    printf("newchar = %d\n", *new char);

    delete newInt;
    newInt = nullptr;  
    delete newchar;
    newchar = nullptr;
}

3)

class Test
{
public:
    Test()
    {
        printf("Test\n");
    }
    ~Test()
    {
        printf("~Test\n");
    }
};
class Test2 : public Test
{
public:
    Test2()
    {
        printf("Test2\n");
    }
    ~Test2()
    {
        printf("~Test2\n");
    }
};
int main()
{
    Test2* t;
    t = new Test2();

    delete t;
    return 0;
}

4)

template <typename T>
    float Calc(float a, float b, int type)
    {
        float ans = 0;
        switch (type)
        {
        case 0:
            ans = a + b;
            break;
        case 1:
            ans = a - b;
            break;
        case 2:
            ans = a * b;
            break;
        case 3:
            ans = a / b;
            break;
        }

        return ans;
    }
int main()
{ 
    int ans1;
    float ans2;
    char ans3;

    ans1 = Calc<int>(2, 5, 0);
    ans2 = Calc<float>(10.0f, 2.5f, 3);
    ans3 = Calc<char>(10, 4, 2);

    return 0;
}


5)

int main()
{
    
    std::list<int> lst;
    for (int i = 0; i < 5; ++i)
    {
        lst.push_front((i + 1) * 10);
    }

    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        printf("num = %d\n", *it);
    }

    // リストを修正してnum=30と表示されるようにプログラムを記述
    for (std::list<int>::iterator it = lst.begin(); it != lst.end();it != lst.end())
    {
        if (*it == 30)
        {
            ++it;            
        }
        else
        {
            it = lst.erase(it);
        }

    }       
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        {
            printf("num = %d\n", *it);
        }
}

6)

int main()
{

    std::vector<int> vec;
    for (int i = 5; i > 0; --i)
    {
        vec.push_back(i * 10);
    }

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        printf("num = %d\n", *it);
    }
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it != vec.end())
    {
        if (*it == 30)
        {
            ++it;
        }
        else
        {
            it = vec.erase(it);
        }

    }
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        printf("num = %d\n", *it);
    }
}
*/