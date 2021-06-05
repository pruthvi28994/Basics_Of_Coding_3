from flask import Flask 
app = Flask(__name__) 			
@app.route('/hello') 
def hello(): 
	return 'Hello, world!'

@app.route('/hello/<username>') 	# URL with a variable 
def hello_username(username): # The function shall take the URL variable as parameter 	
	return 'Hello, {}'.format(username) 

@app.route('/hello/<int:userid>') 	# Variable with type filter. Accept only int 
def hello_userid(userid): 
	return 'Hello, your ID is: {:d}'.format(userid) 
@app.route('/')			#this loads main() functions
def main():
       return "this is without the path i.e like home"
if __name__ == '__main__': 
	app.run(debug=True)

