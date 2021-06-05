from flask import Flask, redirect, url_for 
app = Flask(__name__) 
@app.route('/')
@app.route('/home') 
def main(): 
	return redirect(url_for('hello',username='pruthvi')) # Also pass an optional URL variable  #by default http://localhost:5000/hello/134 i.e userid loads
								#else if any value other than the int is specified it is taken to http://localhost:5000/hello/pruthvi
								#i.e to string ,if username is name is not specifed it results error
@app.route('/hello/<int:userid>') 	# Variable with type filter. Accept only int 
def hello_userid(userid): 
	return 'Hello, your ID is: {:d}'.format(userid) 
	
@app.route('/hello/<username>') 
def hello(username): 
	return 'Hello, {}'.format(username) 
if __name__ == '__main__': 
	app.run(debug=True)

