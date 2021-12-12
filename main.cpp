#include <iostream>

void PrintOptions(/*char option*/);
void PrintAddTwoNumbers(int number_1, int number_2);
void PrintSubtractTwoNumbers(int number_1, int number_2);
void PrintMultiplyTwoNumbers(int number_1, int number_2);
void PrintDivideTwoNumbers(int number_1, int number_2);
int CallNumber1(int number_1);
int CallNumber2(int number_2);
char option;
int number_1;
int number_2;

int main() {

  PrintOptions();
  
  if(option == 'a'){
    PrintAddTwoNumbers(number_1,number_2);

  } else if(option == 'b'){
      PrintSubtractTwoNumbers(number_1,number_2);

  } else if(option == 'c'){
      PrintMultiplyTwoNumbers(number_1,number_2);

  } else if(option == 'd'){
      PrintDivideTwoNumbers(number_1,number_2);

  } else if(option == 'x'){
      std::cout << "Viszlat!\n";
    
  } else {
    std::cout << "Rossz karaktert adtal meg, ezert a program leall. \n";
  }

}

void PrintOptions(){
  std::cout << "Valaszthato muveletek:\n";
  std::cout << "  a) - Osszeadas\n";
  std::cout << "  b) - Kivonas\n";
  std::cout << "  c) - Szorzas\n";
  std::cout << "  d) - Osztas\n";
  //std::cout << "  e) - Hatvanyozas\n";
  std::cout << "  x) - Kilepes\n";
  std::cout << "Muvelet kivalasztasahoz usd be a megfelelo betut! ";
  std::cin  >> option;
  //std::cout << option << "\n";
  //return option;
}

void PrintAddTwoNumbers(int number_1, int number_2){
  std::cout << "Add meg az elso szamot: ";
  std::cin  >> number_1;
  std::cout << "Add meg a masodik szamot: ";
  std::cin  >> number_2;
  std::cout << number_1 << " + " << number_2 << " = " << number_1 + number_2 << "\n\n";
}

void PrintSubtractTwoNumbers(int number_1, int number_2){
  std::cout << "Add meg az elso szamot: ";
  std::cin  >> number_1;
  std::cout << "Add meg a masodik szamot: ";
  std::cin  >> number_2;
  std::cout << number_1 << " - " << number_2 << " = " << number_1 - number_2 << "\n\n";
}

void PrintMultiplyTwoNumbers(int number_1, int number_2){
  std::cout << "Add meg az elso szamot: ";
  std::cin  >> number_1;
  std::cout << "Add meg a masodik szamot: ";
  std::cin  >> number_2;
  std::cout << number_1 << " * " << number_2 << " = " << number_1 * number_2 << "\n\n";
}

void PrintDivideTwoNumbers(int number_1, int number_2){
  std::cout << "Add meg az elso szamot: ";
  std::cin  >> number_1;
  std::cout << "Add meg a masodik szamot: ";
  std::cin  >> number_2;
  std::cout << number_1 << " / " << number_2 << " = " << double(number_1) / number_2 << "\n\n";
}

int CallNumber1(int number_1){
  std::cout << "Add meg az elso szamot: ";
  std::cin  >> number_1;
  return number_1;
}

int CallNumber2(int number_2){
  std::cout << "Add meg a masodik szamot: ";
  std::cin  >> number_2;
  return number_2;
}