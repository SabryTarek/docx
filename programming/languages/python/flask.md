[flask](http://www.pocoo.org/)
==============================
[Armin Ronacher](https://github.com/mitsuhiko)
--------------------------------------------------------------------------------------------------------------------------------


‫ملحاظة‬
‫‪PEP‬‬ ‫‪8‬‬ ‫قترح‬ ‫المُ‬ ‫–‬
‫‪PEP‬‬ ‫‪257‬‬ ‫قترح‬ ‫المُ‬ ‫–‬
‫الذين‬ ‫الشخاص‬ ‫نفس‬ ‫بوااطة‬ ‫مكتوب‬ ‫توإيقات‬ ‫ولِد‬ ‫مُ‬ ‫‪،‬‬ ‫‪Sphinx‬‬ ‫برمجية‬ ‫–‬
‫لساك‬ ‫إطار‬ ‫اخترعوا‬


def lunch_rocket():
    """Main launch sequence director.
    Locks steablets, initialtes radio and fires engins.
    """
    # [...]




config.py
variables



pass


> Python Enhancement Proposal (PEP):
    - meta-PEPs -> theoretical



import:
    - absolute
    - relative -> PEP 328

PEP 257 -> Docstrings
PEP 8 -> Python Style Guide -> like Airbnb Style Guide at Javascript
    - indentation level: 4 space
jinja alternatives:
    - Flask-Mako
    - Flask-Genshi
Flask-DebugToolbar -> side bar for logs



--------------------------------------------------------------------------------------------------------------------------------------------------------
Project Repository

package
    Module -> one python file you can import it to any ather python file



    ‫‪config.py‬‬
‫‪requirements.txt‬‬
‫‪run.py‬‬
‫‪instance/‬‬
‫‪config.py‬‬
‫‪yourapp/‬‬
‫‪__init__.py‬‬
‫‪views.py‬‬
‫‪models.py‬‬
‫‪forms.py‬‬
‫‪static/‬‬
--------------------------------------------------------------------------------------------------------------------------------------------------------
> Referances:

- [Explore Flask](http://exploreflask.com/en/latest/organizing.html)
    - [](https://ahmadnourallah.github.io/exploreflask/)

--------------------------------------------------------------------------------------------------------------------------------------------------------
Single Module:   # all the app in a single file "app.py"

- app.py
- config.py
- templates/
- static/
--------------------------------------------------------------------------------------------------------------------------------------------------------
## Flask Hello World

from flask import Flask

app = Flask()
@app.route('/')
def index():
    return 'Hello World! ^_^'
app.run(port=<port_number>, debug=<true | *false>)
----------------------------------
>>> python app.py
--------------------------------------------------------------------------------------------------------------------------------------------------------
## minimal Flask application

from flask import Flask #  import Flask class from flask library

app = Flask(__name__)
@app.route('/')
def index():
    return 'Hello World! ^_^'
----------------------------------
>>> export FLASK_APP=app.py  export FLASK_ENV=development| production===FLASK_DEBUG=1|0
>>> flask run === python -m flask run === python app.py # $ flask run --host=0.0.0.0
<<< PS C:\path\to\app> $env:FLASK_APP = "hello.py"


app.py | wsgi.py

flask run
--help
--port <port_number>
--host <0.0.0.0>
--
--------------------------------------------------------------------------------------------------------------------------------------------------------
>>> pipenv install flask \
                   flask-sqlalchemy \
                   flask-marshmallow \
                   marshmallow-sqlalchemy
--------------------------------------------------------------------------------------------------------------------------------------------------------
from flask import Flask, flask-sqlalkemy, jsonify, request, render_template, redirect, url_for, flash

app = Flask(__name__)


@app.route('/', methods=['GET'])
def index():
    return 'Hello, World! ^_^'


@app.route('/', methods=['GET'])
def get():
    title = 'my tutorial'
    tutor = ['python','node','php']
    return render_template('index.html',)
    return jsonify({'msg': 'Hello from JSON'})

app.run(port=3000, debug=True)
--------------------------------------------------------------------------------------------------------------------------------------------------------
[Jinja2](http://jinja.pocoo.org/)
=================================

> Delimiters:
    - {{# #}} -> comment
    - {{   }} -> print 
    - {{% %}} -> code [loop - condition - inheritance - import - function: [super() - ] - macro]

    {{% block <block_name> %}}
    {{% endblock %}}
    {{% extends "layout.html" %}}
--------------------------------------------------------------------------------------------------------------------------------------------------------
request object
req.
- args.
- method
- cookies
--------------------------------------------------------------------------------------------------------------------------------------------------------


{{ url_for('static', filename = 'img/flask.jpg') }}
pipenv install webassets
from webassets import Environment, Bundle

--------------------------------------------------------------------------------------------------------------------------------------------------------
pysql
pymongo
------------------------------------------------------------------------------------------------------------------------------------------
### flask extensions
- flask-sock
--------------

! vim wsdemo.py

```
from flask import Flask
from flask_sock import Sock


app = Flask(__name__)
sock = Sock(app)


@sock.route('/reverse')
def reverse(ws):
    while True:
        text = ws.receive()
        ws.send(text[::-1])
```
! pip freeze
! pip install "werkzeug>=2.0.0rc3"
! FLASK_APP=wsdemo.py flask run
! curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.38.0/install.sh | bash
! nvm install node
! npm i -g wscat
! wscat --connect http://127.0.0.1:5000/reverse
! gunicorn -b :5000 --workers 4 --threads 100 wsdemo:app



3.5 inch hard disk
5 amp
12 volt