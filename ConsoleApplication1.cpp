#include <iostream>
#include <vector>
using namespace std;

class Data {
private:
    int Zi;
    string Luna;
    int An;
public:
    void setZi(int Zi) {
        Zi = Zi;
    }
    int getZi() {
        return Zi;
    }
    void setLuna(string Luna) {
        Luna = Luna;
    }
    string getLuna() {
        return Luna;
    }
    void setAn(int An) {
        An = An;
    }
    int getAn() {
        return An;
    }
    Data(int Zi, string Luna, int An) {
        Zi = Zi;
        Luna = Luna;
        An = An;
    }
    // constructor de copiere
    Data(const Data& d) {
        Zi = d.Zi;
        Luna = d.Luna;
        An = d.An;
    }
    // supraincarcare operator
    Data& operator=(const Data& d) {
        Zi = d.Zi;
        Luna = d.Luna;
        An = d.An;
        return *this;
    }
    friend ostream& operator<<(ostream& out, const Data& d) {
        out << d.Zi << " " << d.Luna << " " << d.An;
        return out;
    }
};
class Proprietar {
private:
    string nume;
    Data dataNasterii;

public:
    Proprietar(string nume, Data dataNasterii) {
        nume = nume;
        dataNasterii = dataNasterii;
    }

    friend ostream& operator<<(ostream& out, const Proprietar& p) {
        out << p.nume << " " << p.dataNasterii;
        return out;
    }
};
class Casa {
private:
    string oras;
    int nrProprietari;
    vector<Proprietar> proprietari;

public:
    Casa(string oras) {
        oras = oras;
        nrProprietari = 0;
    }

    // constructor de copiere
    Casa(const Casa& c) {
        oras = c.oras;
        nrProprietari = c.nrProprietari;
        proprietari = c.proprietari;
    }

    // supraincarcare operator =
    Casa& operator=(const Casa& c) {
        oras = c.oras;
        nrProprietari = c.nrProprietari;
        proprietari = c.proprietari;
        return *this;
    }

    Casa& operator+=(const Proprietar& p) {
        proprietari.push_back(p);
        nrProprietari++;
        return *this;
    }

    friend ostream& operator<<(ostream& out, const Casa& c) {
        out << c.oras << " " << c.nrProprietari << "\n";
        for (int i = 0; i < c.nrProprietari; i++) {
            out << c.proprietari[i] << "\n";
        }
        return out;
    }
};

int main()
{

}