 var i,j,res;
const data = require('./employee.json');
console.log(data);
 function getRandom(min,max)
 {
     min=Math.ceil(0);
     max=Math.floor(2);
     return Math.floor(Math.random()*(max-min+1))+min;
 }
 for(j=1;j<=10;j++)
 {
     var amount=0;
     var present=0,absent=0,half=0;
     console.log("\n\n\nEmployee",j,"details=");
        for(i=1;i<=20;i++)
            {
                res=getRandom();
                if(res==2)
                {
                     amount+=600;
                    present+=1;
                 }
                 else if(res==1)
                 {
                     amount+=300;
                     half+=1;
                 }
                else
                 {
                     amount+=0;
                    absent+=1;
                 }    
                 console.log("Day",i,"=",res);    
            }
    console.log(amount);
    console.log("A brief summary of employee's attendance=\n");
    console.log("No of days the employee was present=",present);
    console.log("No of days the employee was present half day=",half);
    console.log("No of days the employee was absent=",absent);
}