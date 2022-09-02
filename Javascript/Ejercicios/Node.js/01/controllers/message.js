const store = require('../store/message');

function addMessage(user, message){
    return new Promise((resolve, reject) => {
        if(!user || !message){
            console.error('[addMessage] Faltan datos');
            reject('Usuario o mensaje no pueden estar vacios');
            return false;
        }
        const fullMessage = {
            user: user,
            message: message,
            date: new Date()
        };
        store.add(fullMessage);
        resolve(fullMessage);
    });
}

function getMessages(){
    return new Promise((resolve, reject) => {
        resolve(store.list());
    }).catch(e => {
        console.error('[getMessages] ' + e);
        reject(e);
    });
}

module.exports = {
    addMessage,
    getMessages
}