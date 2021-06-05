from flask import Flask 	# From module flask import class Flask 
app = Flask(__name__) 
@app.route('/')
def main(): 
	"""Return an HTML-formatted string and an optional response status code""" 
	"""return <!DOCTYPE html> 
		<html> 
		<head><title>Hello</title></head> 
		<body><h1>Hello, from HTML</h1></body> 
		</html>, 200"""
	return render_template('hello.html')
if __name__ == '__main__': # Script executed directly? 
	app.run()
