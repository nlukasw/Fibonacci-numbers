#include <iostream>
#include <vector>
using namespace std;
// range - quantity of Fibonacci numbers
int fibonacci(int range){
 std::vector < int > tab;
    int x = tab.size();
    tab.push_back(1);
    tab.push_back(2);
    for(int i=0; i<range;i++)
    {
    tab.push_back(tab[i]+tab[i+1]);
    cout << tab[i]<<endl;
    }
}
int main()
{
fibonacci(34);

    return 0;
}
