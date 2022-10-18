dias = int(input())

anos = int(dias/365)
dias -= anos*365

meses = int(dias/30)
dias -= meses*30

print(repr(anos)+" ano(s)")
print(repr(meses)+" mes(es)")
print(repr(dias)+" dia(s)")