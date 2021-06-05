"""from jinja2 import Template 
t1 = Template('Hello, {{ name|striptags }}') 
t1.render(name='<em>Peter</em>') 
"""

from jinja2 import Template 
t = Template('''
{% if name %} 
	Hello, {{ name }} 
{% else %} 
	Hello, everybody 
{% endif %}''') 

print(t.render(name='Pruthvi'))
print(t.render()) 
t2 = Template('Hello, {{ name|trim|title }}') 
print(t2.render(name=' peter and paul '))
t = Template(''' <ul> {% for message in messages %} 
	                     <li>{{ message }}</li> 
               		  {% endfor %} 
	          </ul>''')

print(t.render(messages=['apple', 'orange', 'pear']))
	
