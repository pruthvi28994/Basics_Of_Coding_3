from flask import Flask 	# From module flask import class Flask 
app = Flask(__name__) 	# Construct an instance of Flask class for our webapp 
@app.route('/') 
@app.route('/hello') 		# URL '/' to be handled by main() route handler 
def main(): 
	"""say hello"""        #comment
	return 'Hello, world!'

if __name__ == '__main__': # Script executed directly? 
	app.run()

