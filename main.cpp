#include <iostream>
#include <string>
#include <map>

bool verifyVocal(char letter) {
  std::string vowels = "aeiou";
  for (size_t i = 0; i < vowels.size(); i++) {
    if (letter == vowels[i]) {
      return true;
    }
  }
  return false;
}

void count(std::string cadena, std::map<char, int> &contado) {
  for (size_t i = 0; i < cadena.size(); i++) {
    char letter = cadena[i];
    if (verifyVocal(letter)) {
      if (contado.find(letter) == contado.end()) {
        contado[letter] = 1;
      }else{
        contado[letter]++;
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  std::string cadena;
  getline(std::cin, cadena);
  std::map<char, int> contado;
  count(cadena, contado);
  for (std::map<char,int>::iterator it=contado.begin(); it!=contado.end(); ++it)
    std::cout << it->first << " : " << it->second << '\n';
  return 0;
}
