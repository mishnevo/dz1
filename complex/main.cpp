#include "Complex.h"
int main() {
    setlocale(LC_ALL, "Russian");
    int k;
    complex first, second;
    first.Init();
    second.Init();
    cout << "1) +; 2) -; 3) *; 4) /" << endl;
    cin >> k;
    switch (k) {
    case (1):
        first.sum(second);
        break;
    case (2):
        first.min(second);
        break;
    case (3):
        first.mult(second);
        break;
    case (4):
        first.div(second);
        break;
    }


    cout << endl << "Число из файла с максимальным модулем: ";
    double max_module = 0;
    complex max;
    ifstream numb("numbers.txt");
    string z;
    complex a;
    vector<string> p;
    while (getline(numb, z))
    {
        p.push_back(z);
    }
    p.erase(p.begin());
    for (int i = 0; i < quantity(); i++)
    {
        string complex_read = p[i];
        int space_numb = complex_read.find(" ");
        a.setRe(stoi(complex_read.substr(0, space_numb)));
        a.setIm(stoi(complex_read.substr(space_numb, -1)));
        if (a.module() > max_module) {
            max_module = a.module();
            max.setRe(a.getRe());
            max.setIm(a.getIm());

        }
    }
    max.print();
    cout << "Модуль этого числа: " << max_module;
}