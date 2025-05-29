import os 
MAX=100
class Cola: 
    def __init__ (self): 
        self.fin=0 
        self.ini=0
        self.cola=[None]*MAX
    def encolar (self,value): 
        if self.fin==MAX: 
            print("No es posible encolar")
            return False
        else: 
            self.cola[self.fin]=value; 
            self.fin += 1  
    def desencolar(self): 
        if self.isempty(): 
            print("No es posible desencolar, cola vacía")
        else: 
            self.cola[self.fin]=None
            self.fin-=1
    def peek(self): 
        cima=self.cola[self.fin]
        print(f"La cima es: {cima}")
    def ViewCola(self): 
        tamanio=self.fin-self.ini
        for i in range(tamanio): 
            print(f"Valor {i }: {self.cola[i]}")
    def isempty(self): 
        if self.fin==self.ini: 
            return True
        else: 
            return False 
cola=Cola()
while True: 
    
    print("1. Encolar datos")
    print("2. Desencolar datos")
    print("3. Mostrar cima")
    print("4. Mostrar la lista")
    print("5. Salir")
    opcion=int(input("Elija la mejor opcion: "))
    os.system("cls")
    if opcion==1: 
        valor=input("Ingrese un valor cualquiera: ")
        cola.encolar(valor)
    elif opcion==2: 
        cola.desencolar()
    elif opcion==3:
        cola.peek()
    elif opcion==4:
        cola.ViewCola()
    else: 
        print("Saliendo...")
        break