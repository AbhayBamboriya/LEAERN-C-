let obj={id:101,name:"Abhay",salary:"1cr"}
console.log(obj)
// let emp=new obj()
let emp=new Object()
console.log(emp)
// creating key:value pair in emp
emp.id=102;
emp.name="Sam"
emp.salary=10000
console.log(emp)

// creating key:value pair in emp using function
function Company(n,o,w){
    this.name=n;
    this.onwer=o;
    this.worth=w;
}
const e=new Company("Tesla","Musk","1000 Billion")
console.log(e)

console.log(e.name)
console.log(e.worth)
e.nation="US";
console.log(e)
e.nation="India"
console.log(e)
delete e.nation;
console.log(e)


let keys=Object.keys(e)
console.log(keys)
let Values=Object.values(e)
console.log(Values)
let entries=Object.entries(e)
console.log(entries)


Object.seal(e)

e.name="Mahindra"
e.onwer="Tata"
e.worth="100 Billion"
console.log(e)


let o=Object.assign({},e);
console.log(o)