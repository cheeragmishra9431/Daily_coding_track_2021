const fs=require("fs");
fs.readFile("jswriting.txt","utf-8",(a,b)=>{
    console.log(a,b);
});
console.log("this is a message");