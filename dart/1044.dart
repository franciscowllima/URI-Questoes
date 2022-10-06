import 'dart:io';

void main() {
  List<String> x = stdin.readLineSync()!.split(" ");

  int? a = int.parse(x[0]);
  int? b = int.parse(x[1]);

  if (a > b) {
    if (a % b == 0) {
      print("Sao Multiplos");
    } else {
      print("Nao Sao Multiplos");
    }
  }

  if (a < b) {
    if (b % a == 0) {
      print("Sao Multiplos");
    } else {
      print("Nao Sao Multiplos");
    }
  }

  if (a == b) {
    print("Sao Multiplos");
  }
}
