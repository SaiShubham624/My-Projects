import 'dart:io';

main() {
  stdout.writeln('Enter your Name: ');
  String Name = stdin.readLineSync();
  print('My Name is $Name');
}
