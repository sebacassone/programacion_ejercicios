/*
Node.js es un entorno de ejecución de JavaScript que se ejecuta en un entorno diferente al navegador.
Funciona con el motor V8 de JavaScript. Evita el uso de un browser para ejecutar JavaScript.

Peticiones HTTP
HTTP: Hypertext Transfer Protocol
Es el protocolo de comunicación que permite las transferencias de información en la Web.
Es  importante para todas las comunicaciones en la Web.
Como se hace una petición HTTP?
Para hacer una petición HTTP se usa el método GET. El método GET se usa para obtener una página web. GET /index.html HTTP/1.1
Para hacer una petición HTTP se usa el método POST. El método POST se usa para enviar una página web. HTTP/1.1 200 OK.
Puntos clave
Métodos: que quieres hacer.
Obtener información, actualizar, etc.
Los principales:
GET: obtener información. (recoger información del servidor)
POST: crear información. (añadir información al servidor)
PUT: reemplaza información.(reemplaza información del servidor)
PATCH: actualizar información. (actualiza información del servidor)
DELETE: eliminar información. (elimina información del servidor)
OPTIONS: obtener información sobre los métodos. (obtiene información sobre los métodos del servidor)

Cabeceras: información contextual de la petición. "No es lo que se quiere hacer, sino como se quiere hacer."
ejemplo: autenticación, caché, cookies, etc.
Cookies: compartir información entre peticiones.
Cors: (Cross-Origin Resource Sharing) Maneja información desde fuera de nuestro servicio.
Accept: Define el contenido que acepta.
Autenticación: permite autenticar un usuario.
Caché: Gestionar durante cuanto tiempo la respuesta será la misma.

Estado: Como ha ido la operación.
2xx: Éxito.
3xx: Redirección.
4xx: Error del cliente.
5xx: Error del servidor.

Cuerpo: lo que el servidor devuelve. La información que se quiere obtener.
La forma en el que viene el cuerpo viene de las cabeceras:
Content-Type: define el tipo de contenido.
Content-Length: define el tamaño del contenido.

Query: Permiten añadir información extra a lo que se quiera devolver al servidor.
También es una formar de compartir datos con el forntend. (solo datos no confidenciales)
Estructura de una query
?nombre=valor&nombre=valor
?: al final de la URL
nombre: nombre de la query
valor: valor de la query
&: separador de queries
*/