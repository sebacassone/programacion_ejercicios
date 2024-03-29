const mongoose = require('moongose');

const Schema = mongoose.Schema;

const mySchema = new Schema({
    user: String,
    message: {
        type: String,
        required: true
    },
    date: Date,
});

const model = mongoose.model('Messages', mySchema);
module.exports = model;
