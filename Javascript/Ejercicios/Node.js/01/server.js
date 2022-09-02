// import { Express } from "express";
const express = require('express');
const bodyParser = require('body-parser');
const router = require('./network/routes'); // Importamos el router de rutas

let app = express(); // Se inicializa express
app.use(bodyParser.json()); // Se inicializa body-parser para que pueda leer los datos en formato json
app.use(bodyParser.urlencoded({ extended: true })); // Se inicializa body-parser para que pueda leer los datos en formato urlencoded
// app.use(router); // Se usa el router de express
router(app); // Se usa el router de rutas

app.use("/app", express.static("public"));

// app.use('/', function (req,res){ // Para cualquier ruta devuelva la función.
//     res.send('hola'); //s Tiene dos parametros por el protocolo HTTP.
// });

app.listen(3000); // Se pone a escuchar por el puerto 3000
console.log("la aplicación esta escuchando en el puerto 3000, en http://localhost:3000");
