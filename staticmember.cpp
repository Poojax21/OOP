#include <iostream>
using namespace std;

class staticmember
{
private:
    static int cnt;   
    int a;

public:
    static void show()   
    {
        cnt++;
        cout << cnt << endl;
    }
};


int staticmember::cnt = 1;

int main()
{
    staticmember sm;
    int cnt = 7;   
    staticmember::show();   
    cout << cnt << endl;    

    sm.show();
  
    return 0;
}
