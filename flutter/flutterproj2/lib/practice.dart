void main() {
  print("Welcome to dart") ;

  var myC = myClass() ;
  myC.printName("rapth") ; //function calling

  myC.printName("Prashant") ;

  myC.printName("Noobmasterxn") ;
}

class myClass {
  void printName(String name) {  // fun declaration
    print(name) ; // function def
  }
}

