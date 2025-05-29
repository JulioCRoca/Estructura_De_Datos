exam1=float(input("Ingrese la nota de su primer parcial: "))
exam2=float(input("Ingrese la nota de su 2do parcial: "))
proyect=float(input("Ingrese la nota de su proyecto: "))
pondered1=exam1*0.4
pondered2=exam2*0.4
ponderedp=proyect*0.2
nota=float(pondered1+pondered2+ponderedp)
print("Su nota final es: ",nota)