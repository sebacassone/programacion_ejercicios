const db = require('moongose');
const Model = require('../models/message')

db.Promise = global.Promise;
db.connect('mongodb+srv://sebacassone:XWM6xKhA5NtrCjz5@cluster0.pxzs6zx.mongodb.net/?retryWrites=true&w=majority', {
    useNewUrlParser: true
});
console.log('[db] Conectada con éxito')

function addMessage(message) {
    const myMessage = new Model(message);
    myMessage.save();
}

async function getMessages() {
    const messages = await Model.find();
    return messages;
}

module.exports = {
    add : addMessage,
    list: getMessages
}