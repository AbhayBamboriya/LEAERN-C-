function sum_of_all_parameter(){
    let sum=0;
    for(var i=0;i<arguments.length;i++){
        sum+=arguments[i]
    }
    return sum
}
let result=sum_of_all_parameter(1,23,4,39)
console.log(result)