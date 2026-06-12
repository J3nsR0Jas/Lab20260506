
	Algoritmo Registro_Lago
		
		// Definición de variables (equivalente al struct)
		Definir nombre Como Cadena
		Definir profundidadMax Como Real
		Definir temperaturaAgua Como Real
		
		Escribir "--- REGISTRO DE BITÁCORA (LAGO) ---"
		Escribir "" // Línea en blanco
		
		// Pedir datos al usuario
		Escribir "Introduce el nombre del lago:"
		Leer nombre
		
		Escribir "Introduce la profundidad máxima (en metros):"
		Leer profundidadMax
		
		Escribir "Introduce la temperatura actual del agua (°C):"
		Leer temperaturaAgua
		
		Escribir ""
		Escribir "-----------------------------------"
		Escribir "¡Datos guardados con éxito!"
		Escribir "-----------------------------------"
		Escribir ""
		
		// Mostrar los datos registrados
		Escribir "RESUMEN DEL REGISTRO:"
		Escribir "* Lago: ", nombre
		Escribir "* Profundidad: ", profundidadMax, " m"
		Escribir "* Temperatura: ", temperaturaAgua, " °C"
		
FinAlgoritmo
