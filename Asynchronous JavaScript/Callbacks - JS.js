//Without callbacks

function fetch()
{
  setTimeout(()=>{
	console.log("Fetching...");},1000);
}

function update()
{
	setTimeout(()=>{
	console.log("Updating..");},8000);
  
}

update(fetch);
fetch();

/*
Output :

Fectching...
Updating.. 

*/

//With callbacks
function fetch()
{
  setTimeout(()=>{
	console.log("Fetching...");},1000);
}

function update(callback)
{
	setTimeout(()=>{
	console.log("Updating..");
  callback();},8000);
  
}

update(fetch);


/*
Output :

Updating..  
Fectching...


*/