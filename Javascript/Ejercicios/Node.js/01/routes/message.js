const express = require('express');
const response = require('../network/response');
const controller = require('../controllers/message');
const router = express.Router();

router.get('/', function(req, res){
    controller.getMessages()
        .then((messageList) => {
            response.success(req, res, messageList, 200);
        })
        .catch((err) => {
            response.error(req, res, 'Error al obtener los mensajes', 500, err);
        })
});


router.post('/', function(req, res){
    controller.addMessage(req.body.user, req.body.message)
        .then((fullMessage) => {
            response.success(req, res, fullMessage, 201);
        })
        .catch(e => {
            response.error(req, res, 'informacion invalida', 423, 'error al crear el mensaje');
        }
    );
    //res.send();
    //res.status(201).send('Mensaje ' + req.body.si + ' añadido');
});

module.exports = router;
