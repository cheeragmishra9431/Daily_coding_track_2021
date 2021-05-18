const fs=require("fs");
let text = fs.readFileSync("jswriting.txt", "utf-8");
console.log("The content of the file is")
console.log(text);
text = text.replace("kartikey", "aman");
console.log("Creating a new file...")
fs.writeFileSync("jswriting.txt", text);