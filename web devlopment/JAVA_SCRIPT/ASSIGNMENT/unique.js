let arr=[1,2,3,4,5,61,2,5,42,96]
function condition(element,ans){
    for(let i=0;i<ans.length;i++){
        if(element!=ans[i]){
            ans.push(element)
            break
        }
        else{
            continue
        }
    }
    return
}
function unique(a){
    let ans=[]
    ans.push(a[0])

    a.forEach(ele => {
        condition(ele,ans)
        
    });
    console.log(ans)
    
    
   

}

unique(arr)