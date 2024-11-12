#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2, word3;


    cin >> word1 >> word2 >> word3;

    // Determine the animal based on the hierarchy of words
    if (word1 == "vertebrado") {
        if (word2 == "ave") {
            if (word3 == "carnivoro") {
                cout << "aguia" << endl;
            } else if (word3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (word2 == "mamifero") {
            if (word3 == "onivoro") {
                cout << "homem" << endl;
            } else if (word3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    } else if (word1 == "invertebrado") {
        if (word2 == "inseto") {
            if (word3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (word3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (word2 == "anelideo") {
            if (word3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (word3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
