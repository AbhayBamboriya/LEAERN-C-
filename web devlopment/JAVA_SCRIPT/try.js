let arr=[1,23,45,7,5]
arr.map(function(element,index,arr){
    console.log(index,element,arr)
})



let arr1=['a','g','v','t','r','d']
arr1.forEach((h=>console.log(h.toUpperCase())))


//filter
console.log("-:ENDS WITH:-")
let names=["Abhay","Ani","Bharat","Dilip"]
const name_with_A=names.filter((h) => {
    return h.endsWith('p')
})
console.log(name_with_A)


//shopping cart
console.log("-:SHOPPING CART:-")
// 0+20+30+40+50
const cart_bill=[20,30,40,50]
const sum_of_cart_bill=cart_bill.reduce((prev,curr)=>prev+curr,0)
console.log(sum_of_cart_bill)



//game
console.log("-:GAME SCORE:-")
const gamescore=[200,280,400,700,2.6]
const gamescorecheck=gamescore.every((v)=>typeof v=='number')
console.log("check:",gamescorecheck)
const above200=gamescore.find((score)=>score>200)
console.log(above200)



//spread and rest operator
const one_array=[1,2,3,4,5,6]
const two_array=[7,8,9]
const three_array=one_array.concat(two_array)
console.log(three_array)

const fourth_array=[one_array,two_array]
console.log(three_array)

//sprad operator

const fifth_array=[...one_array,...two_array]
console.log(fifth_array)
console.log("-:Spread Operator:-")
console.log(...one_array)


//object to array
console.log("-:Object to Array:-")
function manyArguments(){
    let args=Array.from(arguments)
    let finalarr=args.map(e=>e*2)
    console.log(finalarr)
}
manyArguments(1,2,3,4)


//rest operator
console.log("-:Rest operator:-")
function many(...ags){
    let finalarr1=ags.map(e=>e)
    console.log(finalarr1)
}
many(2,5,3,6,2,7,3)


//SET
console.log("-:SET:-")
let empty_set=new Set()
console.log(empty_set.size)
let my_Array=[1,2,3,4,5,9,6,7]
let new_set=new Set(my_Array)
console.log(new_set)
let new1_set=new Set([...my_Array])
console.log(new1_set)
new_set.add(71)
console.log(new_set)
console.log(new_set.has(0))

// new_set.clear()
new_set.clear()
console.log(new_set)

//FILTERS
console.log("-:FILTER:-")
const words=["Abhay","Ritesh","Sanjay","Atul","Santacruz"]
const result=words.filter(word=>word.length>5
    )
console.log(result)



//SET DIFFERNCE
console.log("-:SET DIFFERNCE:-")

let my_Array1=[1,2,3,4,5,9,6,7,11]
let my_Array12=[1,9,6,7]
let empty_set1=new Set(my_Array1)
console.log(empty_set1)
let empty_set2=new Set(my_Array12)
console.log(empty_set2)
function set_difference(seta, setb){
    return new Set([... seta].filter(el=>! setb.has(el)))
}
console.log(set_difference(empty_set1,empty_set2))
// MAP
console.log("-:DEFINING THE MAP:-")
let arr4=new Map()
console.log(arr4.size)


//map value
// let arr3=[[1,"Mithun"],[2,"Alka"],[3,"Prakar"],[4,"Aksh"],[5,"Abhay"]]

// arr3.map((ele)=>map.new_set(ele[0],ele[1]))
// console.log(arr3)


//  MAP
console.log("-:MAP:-")
const myMap = new Map([
    [1, "one"],
    [2, "two"],
    [3, "three"],
  ]);
console.log(myMap)


// CLASS
console.log("CLASS")
class product{
    name;
    price;
    rating;
    display(){
        console.log("Displaying the current position")
    }
}
const p=new product()
console.log(p)
//for printing dispaly funciton
p.display()