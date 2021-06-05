from flask import Flask
app=Flask(__name__)
@app.route('/home')
def home():
    return "hello world"

@app.route('/home/<username>')
def home_username(username):
	return 'hello ,{}'.format(username)
@app.route('/home/<int:userid>')

def home_userid(userid):
	return 'hello ,your id is {:d}'.format(userid)
	
if __name__ == '__main__':
	app.run()
