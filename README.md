El archivo `.gitignore` es una herramienta útil que le permite a Git ignorar ciertos archivos o directorios en su proyecto. 

1. **¿Por qué es conveniente incluirlo?**
   - **Evita el seguimiento innecesario**: Los archivos como los logs, los binarios, las dependencias y los archivos temporales no necesitan ser rastreados por Git. Ignorar estos archivos puede hacer que el repositorio sea más limpio y fácil de manejar.
   - **Protege la información sensible**: Puedes usar `.gitignore` para evitar subir accidentalmente archivos que contengan información sensible, como contraseñas o claves API.
   - **Personalización por lenguaje y entorno**: Cada lenguaje de programación o entorno tiene sus propios archivos y directorios que deben ignorarse. Con `.gitignore`, puedes especificar reglas personalizadas para tu proyecto.

2. **¿Cuándo se hace?**
   - Idealmente, se debe crear y configurar tu archivo `.gitignore` **antes de hacer el primer commit**. De esta manera, puedes asegurarte de que Git ignore los archivos innecesarios desde el principio.

3. **¿Cómo configuraría el archivo .gitignore?**
   - Se crea un archivo llamado `.gitignore` en la raíz del repositorio.
   - En este archivo, se especifica los nombres de los archivos o directorios que Git ignorara. Cada línea del archivo representa un patrón a ignorar.

**PUNTO 3. Apartado (D)**

- El resultado es el mismo para los apartados 2 y 3 porque ambas direcciones de memoria, la almacenada por el puntero y la de la variable, son las mismas. Esto se debe a que al asignar la dirección de la variable al puntero mediante `puntero = &variable;`, el puntero `puntero` apunta a la dirección de memoria de la variable `variable`.

En el punto 4, obtendrías la dirección de memoria del puntero en sí. Esta dirección de memoria será diferente de las direcciones de memoria de la variable y del puntero almacenadas por el puntero. Cada variable, incluidos los punteros, tiene su propia dirección de memoria en la que está almacenada.

Por lo tanto, en resumen:
- Para el apartado 2, obtienes la dirección de memoria almacenada por el puntero.
- Para el apartado 3, obtienes la dirección de memoria de la variable.
- Para el apartado 4, obtienes la dirección de memoria del puntero en sí.
