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

    
    cout<<endl;

    int n;
    n = s.size();
    int x;
    stack<int> p;

    for (int i = 1; i < n; i++)
    {
        s.pop();
        x = s.top();

        p.push(x);
    }
    int m;
    m = p.size();

    for (int i = 0; i < m; i++)
    {
        cout << p.top() << " ";
        p.pop();
    }
}