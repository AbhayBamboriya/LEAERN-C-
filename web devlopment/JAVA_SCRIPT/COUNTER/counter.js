//holding elements
const decrease=document.getElementById("decrement")
const values=document.getElementById("value")
const reset=document.getElementById("reset_Value")
const increase=document.getElementById("increament")


//adding event
decrease.addEventListener("click",()=>{
    const value=Number(values.innerText);
    if(value>0){
        values.innerText=value-1;
    }
    else{
        alert("Error")
    }

})
reset.addEventListener("click",()=>{
    values.innerText=0;

})

increase.addEventListener("click",()=>{
    const value=Number(values.innerText)
    values.innerText=value+1
})