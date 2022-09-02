const express = require('express');
const message = require('../routes/message');

const routes = function (server) {
    server.use('/message', message);
}

module.exports = routes;