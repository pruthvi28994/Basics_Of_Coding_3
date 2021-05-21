import array as arr
from random import shuffle
a=2  #global variables
print("Functions")
def add():   #functions
        b=3   #lcal variables
        c=a+b
        print(c)
add()  #calling functions
# array using python.............
My_Array=arr.array('i',[1,2,3,4,5,6])
print("reverse array elements in increment of 1",My_Array[::-1])
print("reverse array elements in increment of 2",My_Array[::-2])
print("reverse array elements in increment of 3",My_Array[::-3])
print("\n")
print("Arrays vs List")
My_Array=arr.array('i',[1,2,3,4]) #array
My_list=[1,'abc',1.20] #lists  muttable
My_Tupple=(1,'Pruthvi',22) #tupple immutable
print("Arrays",My_Array)
print("Lists",My_list)
print("tupple",My_Tupple)


# lambda function it accepts N num of parameters but returns only one parameters
a = lambda x,y : x*y
print(a(5, 6))

b = lambda x : x*x*x
print(b(3))
print("\n")
x = ['Keep', 'The', 'Blue', 'Flag', 'Flying', 'High'] #list shuffling
shuffle(x)  #making use of shuffle
print(x)
print("\n")

print("sring functions")
name="NMIT"
print("Converting to lower case:",name.lower())
print("Capitalising the first letter:",name.capitalize())
print("lenght of string:",len(name))
print("Uppercase:",name.upper())

print("\n")
print("Dictionary")
Dictionary={'Country':'India','Capital':'Delhi','PM':'Modi'}
print(Dictionary)
print("Accesing Dictionary values:",Dictionary["Capital"])


print("\n")

print("Classes and Objects")
class Employee:
        def __init__(self, name, age,salary):  #constructors
                self.name = name
                self.age = age
                self.salary = 20000
        def setName(self,name):
            self.name=name
        def setSalary(self,salary):
            self.salary=salary
E1 = Employee("Pruthvi Sagar S", 23, 20000)
# E1 is the instance of class Employee.
#__init__ allocates memory for E1. 
print(E1.name)
print(E1.age)
print(E1.salary)
print("After changing using setter")
E1.setName("Jayanth")
E1.setSalary(66666)
print(E1.name)
print(E1.salary)

