#include <iostream>

using namespace std;

bool czy_trojkat (double a,double b, double c)
{
    if (a<=0 || b<=0 || c<=0) return false;
    if (a<b+c && b<c+a && c<a+b) return true;
    return false;
}
void testuj_czy_trojkat()
{
    if (czy_trojkat(0, 2, -3) !=false)  cout <<"problem 1"<<endl;
    if (czy_trojkat(1,2,3) != false) cout<<"problem 2"<<endl;
    if (czy_trojkat(2,2,2) != true) cout<<"problem 3"<<endl;

}

//#define TESTY
int main()

{
#ifdef TESTY
    testuj_czy_trojkat();
#else
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Podaj bok a:\t" << endl;
    cin>> a;

    cout << "Podaj bok b:\t" << endl;
    cin>> b;

    cout << "Podaj bok c:\t" << endl;
    cin>> c;

   if (czy_trojkat != false)
        {
        cout<< "Podane odcinki moga byc bokami trojkata "<<endl;

        }
    else
        {
        cout<< "Podane odcinki nie moga byc bokami triojkata "<<endl;
        }
#endif
    return 0;
