function occcurance(str){
    let length_of_str=str.length
    let arr=[]
    let ans=[]
    for(let i=0;i<length_of_str;i++){
        arr.push(str[i])
    }
    let count=0
    for(let i=0;i<length_of_str-1;i++){
        let t=0
        for(let j=i+1;j<length_of_str;j++){
            
            if (t==0){
                ans.push(str[i])
                t++
                break
            }
        
            if(str[i]==str[j]){
                count++;
            }
            else    count=1;
        }
    
    ans.push(count)
    }
    console.log(ans)
    console.log(...arr)
}
occcurance("tttffff")
occcurance("Abhay")
occcurance("ssgggfff")