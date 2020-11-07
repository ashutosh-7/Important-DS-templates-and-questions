
let myPromise= new Promise((resolve,reject)=>{
        //it takes some time to excute
                let a;
                setTimeout(()=>{
                  a="Fetching...";
                 if(a)
                resolve(a);
                else
                reject("Error");
                  },8000);
                
});

myPromise.then((a)=>{
        console.log(a);
        console.log("Updating..");
})
            .catch((err)=>console.log(err));

