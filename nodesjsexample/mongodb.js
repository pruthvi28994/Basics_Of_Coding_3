const mongo = require('mongodb');
const url = "mongodb://localhost:27017";

mongo.connect(url, { useNewUrlParser: true }, (err, db) => {
    if (err) {
        console.log(err);
        process.exit(0);
    }
    console.log('database connected!');
    var dbo = db.db('codeforgeeks');
    dbo.createCollection('usersd', (err, result) => {
        if (err) {
            console.log(err);
            process.exit(0);
        }
        console.log('collection created!');
        db.close();
    });
});

