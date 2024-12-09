#include <iostream>
#include <string>
using namespace std;

class Utilizador {
private:
    string nome = "David";
    string palavraPasse = "123456";

public:
    void set(string nome, string palavraPasse) {
        this->nome = nome;
        this->palavraPasse = palavraPasse;
    }
    void get() {
        cout << nome << " : " << palavraPasse << endl;
    }
};

int main() {
    Utilizador novo_obj;
    novo_obj.get();
    novo_obj.set("David", "123456");
    novo_obj.get();
    return 0;
}