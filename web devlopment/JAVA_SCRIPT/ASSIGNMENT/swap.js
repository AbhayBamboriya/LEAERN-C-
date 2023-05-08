let num1=40
let num2=22

function swap(a,b){
    console.log("Initially num1 is",a,"num2 is",b)
    a=a+b
    b=a-b
    a=a-b
    
    console.log("After Swaping num1 is",a,"num2 is",b)


}
swap(num1,num2)
