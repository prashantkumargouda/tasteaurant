import "dart:io" ;

int main() {
  stdout.write("Welcome to Dart");
  stdout.write("Enter your name :");
  var name = stdin.readLineSync() ;
  print("welcome , $name") ;
  return 0;

}