function checkprime(num){
     var flag=0;
     var i=0;
     if(num == 1 || num == 0)
          console.log(num+" is nether prime or not a prime");
     for(i=2;i<=num/2;i++){
           if(num%i==0){
              flag=1;
              break;
            }
     }
     if(flag==0)
         console.log(num+" is a prime number");
     else
         console.log(num+" is not a prime number");
}
console.log(checkprime(4));
