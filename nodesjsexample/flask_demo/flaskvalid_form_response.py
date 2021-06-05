from flask import Flask,render_template,request 
app = Flask(__name__) 
@app.route('/') 
def main(): 
	return render_template('student.html') 	#render the main home page form.html
@app.route('/process', methods=['POST']) 
def process(): 	                                 # Retrieve the HTTP POST request parameter value from 'request.form' dictionary 
	_username = request.form.get('username') 	# get(attr) returns None if attr is not present 

	if _username: 
		return render_template('response.html', username=_username) 
	else: 
		return 'Please go back and enter your name...', 400 	# 400 Bad Request
	
if __name__ == '__main__': 
	app.run(debug=True)

