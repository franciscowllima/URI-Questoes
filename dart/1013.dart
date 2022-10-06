import 'dart:io';

void main() {
  List<String> x = stdin.readLineSync()!.split(" ");

  var a = x[0];
  var b = x[1];
  var c = x[2];

  var maior =
      (int.parse(a) + int.parse(b) + (int.parse(a) - int.parse(b)).abs()) / 2;
  var resultado = (maior + int.parse(c) + (maior - int.parse(c)).abs()) / 2;

  print("${resultado.toInt()} eh o maior");
}
