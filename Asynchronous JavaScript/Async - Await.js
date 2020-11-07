
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

async function doTask()
{
    try{

        let firstResponse=await makeRequest("India");
        console.log(`Location = ${firstResponse}`);

        let secondResponse= await responseRequest(firstResponse);
        console.log(`Finally we are in ${secondResponse}`);
    }
    catch(err)
    {
        console.log(err);
    }
}

doTask();