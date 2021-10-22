// Classwork18.10.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void fibonacci(int x,int y,vector<int> &v,int n)

{
    v.clear();
    v.push_back(x);
    v.push_back(y);
    n = n - 1;
    for (int i = 2; i < n-1; i++)
    {
        v.push_back(v[i] + v[i + 1]); //опасная запись
    }
     
}

void print(const vector<int> &v,const string &metka)
{
        for (int i = 0; i < v.size(); i++)
        {

            cout <<metka<<" "<<v[i] << endl;
        }
}

int main()
{
    int n = 40;
    string metka = "Output:";
    vector <int> v;
    fibonacci(1, 2, v, n);
    print(v, metka);

    return 0;

}

