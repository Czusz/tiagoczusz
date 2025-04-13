#include <iostream>
#include <string>

using namespace std;

class Personagem {
public:
    Personagem(string nome) : nome(nome) {}

    void interagir() {
        cout << "Olá, eu sou " << nome << ", seu personagem virtual!" << endl;
        cout << "Como posso te ajudar hoje?" << endl;
    }

private:
    string nome;
};

int main() {
    Personagem tiago("Tiago Czusz Correia");
    tiago.interagir();
    
    return 0;
}
