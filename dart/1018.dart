import 'dart:io';

void main() {
  var x = stdin.readLineSync();

  int? notasDe100 = 0;
  int? notasDe50 = 0;
  int? notasDe20 = 0;
  int? notasDe10 = 0;
  int? notasDe5 = 0;
  int? notasDe2 = 0;
  int? notasDe1 = 0;
  int? resto = 0;

  if (int.parse(x!) < 1000000) {
    if (int.parse(x) >= 100) {
      notasDe100 = int.parse(x) ~/ 100;
      resto = int.parse(x) % 100;
    }
    if (int.parse(x) >= 50) {
      notasDe50 = resto ~/ 50;
      resto = resto % 50;
    }
    if (int.parse(x) >= 20) {
      notasDe20 = resto ~/ 20;
      resto = resto % 20;
    }
    if (int.parse(x) >= 10) {
      notasDe10 = resto ~/ 10;
      resto = resto % 10;
    }
    if (int.parse(x) >= 5) {
      notasDe5 = resto ~/ 5;
      resto = resto % 5;
    }
    if (int.parse(x) >= 2) {
      notasDe2 = resto ~/ 2;
      resto = resto % 2;
    }
    if (int.parse(x) >= 1) {
      notasDe1 = resto ~/ 1;
      resto = resto % 1;
    }
    print("${int.parse(x)}");
    print("$notasDe100 nota(s) de R\$ 100,00");
    print("$notasDe50 nota(s) de R\$ 50,00");
    print("$notasDe20 nota(s) de R\$ 20,00");
    print("$notasDe10 nota(s) de R\$ 10,00");
    print("$notasDe5 nota(s) de R\$ 5,00");
    print("$notasDe2 nota(s) de R\$ 2,00");
    print("$notasDe1 nota(s) de R\$ 1,00");
  }
}
