n=int(input('enter the number'));
def numpattern(num):   
 x=1;
 for row in range(num):
     if(row % 2 == 0):
        for col in range(1,num+1):
            print(x,end=" ");
        print((x+1),end=" "); 
     else:
        print((x+1),end=" ");
        for col in range(1,num+1):
             print(x,end=" ");
     print();
     x=x+1;
numpattern(n);