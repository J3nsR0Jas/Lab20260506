
Algoritmo SistemaRegistroNotas
    Definir opcion Como Entero
    
    Repetir
        Escribir "======================================="
        Escribir "   MENÚ - SISTEMA DE REGISTRO DE NOTAS "
        Escribir "======================================="
        Escribir "1. Registrar alumnos y generar reporte"
        Escribir "2. Salir del programa"
        Escribir "---------------------------------------"
        Escribir "Seleccione una opcion: "
        Leer opcion
        
        Segun opcion Hacer
            1:
                Definir cantidad, i Como Entero
                Definir suma, promedio Como Real
                
                Escribir ""
                Escribir "--- SISTEMA DE REGISTRO DE NOTAS ---"
                Escribir "¿Cuantos alumnos desea registrar? "
                Leer cantidad
                
                Definir listaAlumnosNombre Como Cadena
                Definir listaAlumnosNota Como Real
                Dimension listaAlumnosNombre[cantidad]
                Dimension listaAlumnosNota[cantidad]
                
                Para i <- 1 Hasta cantidad Con Paso 1 Hacer
                    Escribir ""
                    Escribir "Estudiante #", i
                    
                    Escribir "Nombre completo: "
                    Leer listaAlumnosNombre[i]
                    
                    Repetir
                        Escribir "Nota (0 a 20): "
                        Leer listaAlumnosNota[i]
                        
                        Si listaAlumnosNota[i] < 0 O listaAlumnosNota[i] > 20 Entonces
                            Escribir "¡Error! La nota debe estar en el rango de 0 a 20. Intente de nuevo."
                        FinSi
                    Hasta Que listaAlumnosNota[i] >= 0 Y listaAlumnosNota[i] <= 20
                FinPara
                
                Escribir ""
                Escribir "--- REPORTE FINAL ---"
                suma <- 0
                
                Para i <- 1 Hasta cantidad Con Paso 1 Hacer
                    Escribir "Alumno: ", listaAlumnosNombre[i], " | Nota: ", listaAlumnosNota[i] Sin Saltar
                    
                    Si listaAlumnosNota[i] >= 11 Entonces
                        Escribir " [APROBADO]"
                    Sino
                        Escribir " [DESAPROBADO]"
                    FinSi
                    
                    suma <- suma + listaAlumnosNota[i]
                FinPara
                
                promedio <- suma / cantidad
                Escribir ""
                Escribir "Promedio general: ", promedio
                Escribir ""
                
            2:
                Escribir ""
                Escribir "Saliendo del sistema... ¡Hasta luego!"
                
            De Otro Modo:
                Escribir ""
                Escribir "¡Opcion invalida! Por favor, elija 1 o 2."
        FinSegun
        
    Hasta Que opcion = 2
    
FinAlgoritmo
