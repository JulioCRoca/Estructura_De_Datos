hora=int(input("Ingrese la hora actual en formato 24 horas: "))
minutos=(input("Ingrese los minutos: "))
segundos=input("Ingrese los segundos: ")

if hora>12:
    hora=hora-12
    print("Su hora en formato 12 horas es: ",hora,":",minutos,":",segundos," pm")
else:     
    print("Su hora en formato 12 horas es: ",hora,":",minutos,":",segundos," am")   

    
    