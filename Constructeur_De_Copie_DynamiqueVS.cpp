#include <iostream>
using namespace std;
class tab
{
private:
    int nombre;
    double* dynamique;
public:
    tab(int);
    tab(tab&);
    ~tab();
};
tab::tab(int a)
{
    nombre = a;
    dynamique = new double[nombre];
    cout << "Adresse allocation dynamique du constructeur " << a << endl;
}
tab::tab(tab& c)
{
    nombre = c.nombre;
    dynamique = new double[c.nombre];
    for (int i = 0; i <= c.nombre; i++)
        dynamique[i] = c.dynamique[i];
    cout << "Adress du constructeur de recopie (dynamique) " << dynamique << endl;
    cout << "Adress de c.dynamique " << c.dynamique << endl;
}
tab::~tab()
{
    cout << "Adresse du destructeur " << nombre << endl;
    delete dynamique;
}
void fct(tab);
int main()
{
    tab a(3);
    fct(a);
}
void fct(tab b)
{
    cout << "Appelle de la fonction fct ";
}