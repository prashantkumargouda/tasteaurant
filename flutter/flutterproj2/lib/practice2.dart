// creating a class and an object and using it

class printDart {
  // creating a field geek1 a empty string
  String geek1 = "" ;

  // creating a function
  void geek() {
    print("Welcome to $geek1") ;
  }
}
void main() {
  // creating a instance of class printDart or creating object of class printDart
  printDart geek = new printDart() ;

  geek.geek1 = "dart";

  // calling function name geek using object of class printDart

  geek.geek() ;
}