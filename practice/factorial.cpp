#include <iostream>

int fact(int num)
{
    if (num < 0)
        return -1;
    if (num == 0)
        return 1;
    return num*fact(num-1);
}

int main()
{
    int n;
    std:: cin >> n;
    while (n--)
    {
        int x;
        std:: cin >> x;
        std:: cout << fact(x) << "\n";
    }
    
    return 0;
}