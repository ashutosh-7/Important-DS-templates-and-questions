
function makeRequest(location)
{
    return new Promise((resolve,reject)=>{
        console.log("Location in Processing...");
        if(location==="India")
        resolve(location);
        reject("This is not the safe place to visit");
    });
}

function responseRequest(response)
{
    return new Promise((resolve,reject)=>{
        console.log("Response Recieved...");
        if(response)
        resolve(response);
        else
        reject("Error");
    });
}

makeRequest("India")
                .then((response)=>{
                    console.log(`Location = ${response}`);
                    return responseRequest(response);
                })
                .then((final)=>{
                    console.log(`Finally we are in ${final}`);
                })
                .catch((err)=>console.log(err));