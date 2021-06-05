var foo = 3; 
var bar = 5; 
console.log(foo + 1); // 4 
console.log(foo / bar); // 0.6 
console.log(foo * bar); // 15
 console.log(foo - bar); // -2; 
console.log(foo % 2); 


var foo = true; 
console.log(foo); // true 
// Boolean operations (&&, ||, !) work as expected: 
console.log(true && true); // true
 console.log(true && false); // false 
console.log(true || false); // true
 console.log(false || false); // false 
console.log(!true); // false
 console.log(!false);

//array
var foo=[];
foo.push(1);
foo.push(2);
foo.unshift(3); //add at the top 
console.log(foo);


//array

var foo={};
console.log(foo);
foo.name='pruthvi';
foo.age=20;
console.log(foo);


//function

function fibonacci(num) 
    {    
        if(num==1) 
            return 0; 
        if (num == 2) 
            return 1; 
        return fibonacci(num - 1) + fibonacci(num - 2); 
    } 
 console.log(fibonacci(8));

