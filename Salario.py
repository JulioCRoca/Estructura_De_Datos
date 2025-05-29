nombre=input("Ingrese su nombre: ")
horas=int(input("Ingrese las horas trabajadas: "))
pago=float(input("Ingrese el pago por horas; "))
salario=pago*horas

if salario>8272:
    salario=salario*0.13
    print("Su salario neto es: ",salario)
print(nombre,"no necesita pagar IVA, su salario es: ",salario)