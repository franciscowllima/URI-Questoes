import 'dart:io';

void main() {
  String? x = stdin.readLineSync();
  String? y = stdin.readLineSync();

  int soma = int.parse(x!) + int.parse(y!);

  print("SOMA = $soma");
}
