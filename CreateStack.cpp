#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;

    s.push(4);
    s.push(3);
    s.push(7);
    s.push(5);
    s.push(2);
    s.push(1);
    s.push(9);
    s.push(8);

    int n;
    n=s.size();

    for (int i = 1; i <= n; i++)
    {
       cout<<s.top()<<" ";
       s.pop();
       
    }
    
}