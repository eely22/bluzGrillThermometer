var fs, serverEvent, express, app, request, extend, events, eventEmitter, bodyParser, http;

express = require('express');
app = express();

app.listen(80);

//return the admin page, which is the Homeowner UI
app.get('/', function (req, res) {
    var uid = req.params.uid,
        path = req.params[0] ? req.params[0] : 'index.html';
    res.sendfile(path, {root: './page'});
});
