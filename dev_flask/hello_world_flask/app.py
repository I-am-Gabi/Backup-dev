from flask import Flask
app = Flask(__name__)

@app.route("/")
def index():
    return "Hey Ladies, welcome!"

@app.route("/ladies")
def ladies():
	return "Ladies sao demais"

if __name__ == "__main__": 
    app.run(debug=True)