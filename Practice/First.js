const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
function NameTaker(Name)
{
    rl.question(`The Age of ${Name} is :`, function(Age){
        console.log(`Okay so the Age of ${Name} is ${Age}`);
        rl.close();
    });
}
console.log("Okay So this is a JavaScript Program");
NameTaker("Sai Shubham");

process.exit(0);
