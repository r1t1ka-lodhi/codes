//how to update the state of an array using react

//here we created an array of ffod where we can inset new items
//  and can remove them by clicking on them 

import React,{useState} from "react";

function UpdateAraay(){

    const[food,setFood]=useState(["Apple","Orange","Banana"]);
    function handleAddFood(){
        const newFood= document.getElementById("foodInput").value;
        document.getElementById("foodInput").value="";
        setFood(newfood=>[...newfood,newFood]);
        
    }
    function handleRemoveFood(index){
        setFood(food.filter((_,i) => i !== index));
    }
    return(<div>
        <h2>List of Food Items</h2>
        <ul>
            {food.map((food,index)=> <li key={index} onClick={()=>handleRemoveFood(index)}> 
                {food} 
            </li>)}
        </ul>

        <input type="text" id="foodInput" placeholder="Enter food name" 
        />
        <button onClick={handleAddFood}>Add Food</button>
        {/* <button onClick={handleRemoveFood}>Remove Food</button> */}
    </div>)

}
export default UpdateAraay;