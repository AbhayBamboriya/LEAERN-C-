
function random(a){
    let first_ele,second_ele,last_ele
    console.log("First Element is - ",a[0])
    console.log("Second Element is - ",a[1])
    console.log("Last Element is - ",a[a.length-1])


}
function manyArguments(){
    let args=Array.from(arguments)
    let finalarr=args.map(e=>e)
    console.log(finalarr)
    return finalarr
   
}

a=manyArguments(1,2,3,4,2,9,7,10)
random(a)

