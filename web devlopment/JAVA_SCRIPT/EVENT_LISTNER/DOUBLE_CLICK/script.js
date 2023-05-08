//double click
console.log("click")

let paragraph=document.getElementById("para")
console.log(paragraph)
let clicks=document.getElementById("click")
clicks.addEventListener("dblclick",function(){
    document.getElementById("para").style.fontSize="60px";
    document.getElementById("para").style.marginTop="20px";
    document.getElementById("para").style.color="red";
    document.getElementById("para").style.listStyle="square";
    document.getElementById("click").style.display="none";
}
)



