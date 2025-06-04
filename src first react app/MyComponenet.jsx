// import React,{useState} from "react";

// function MyComponent(){
//     let [name, setName]=useState("ritika");
//     let [Age, setAge]=useState(0);
//     let [isEmployed, setIsEmployed]=useState(false);

//     const updateName=()=>{     
//         setName("Ritika");
        
//     }
//     const incermentAge=()=>{
//         setAge(Age+ 1);
//     }
//     const toggle=()=>{
//         setIsEmployed(!isEmployed);
//     }
//     return(
//         <div>
//             <p>Name: {name}</p>
//             <button onClick={updateName}>Set Name</button>
//             <p>Age: {Age}</p>
//             <button onClick={incermentAge}>Incerment Age</button>
//             <p>isEmployed: {isEmployed? "YES":"No"}</p>
//             <button onClick={toggle}>Toggle status</button>
//         </div>
//     )
// };
// export default MyComponent;

import React,{useState} from "react";

// function MyComponenet(){
//     const [name,setName]= useState("Guest");
//     const[quantity, setQuantity]= useState(1);
//     const[comment, setcomment]= useState("");
//     const[payment, setPayment]= useState("");
//     const[shipping, setShipping]=useState("Delivery");
    
//     function handleQuantityChange(e){
//         setQuantity(e.target.value);
//     }

//     function handleNameChange(e){
//         setName(e.target.value);
//     }

//     function handleComment(e) {
//         setcomment(e.target.value);
//     }

//     function handlePayment(e) {
//         setPayment(e.target.value);
//     }
//     function handleShipping(e) {
//             setShipping(e.target.value);
//         }

//     return(
//         <div>
//             <input value={name} onChange={handleNameChange} />
//             <p>Name: {name}</p>

//             <input value={quantity} onChange={handleQuantityChange}/>
//             <p>Quantity:{quantity}</p>
            
//             <textarea value={comment} onChange={handleComment}
//             placeholder="Enter delivery instructions"/>
//             <p>Comment: {comment}</p>


//             <select value={payment} onChange={handlePayment}>
//                 <option value="">Select an option</option>
//                 <option value="visa">Visa</option>
//                 <option value="Mastercard">Mastercard</option>
//                 <option value="Giftcard">Giftcard</option>
//             </select>
//             <p>Payment:{payment}</p>

//             <label >
//                 <input type="radio" value="Pick up" 
//                         checked={shipping==="Pick up"}
//                         onChange={handleShipping}/>
//                 Pick up
//             </label>
//             <label >
//                 <input type="radio" value="Delivery" 
//                         checked={shipping==="Delivery"}
//                         onChange={handleShipping}/>
//                 Delivery
//             </label>
//             <p>Shipping: {shipping}</p>
            
//         </div>
//     );
// }

function MyComponenenet(){
    const[car,setCar]=useState({year:2024,
                                make:"ford",
                                model:"Mustang"}

    );

    function handleYearChange(e){
         setCar(c=>({...c, year:e.target.value }));//spread operator
    }  
    
    function handleMakeChange(e){
         setCar(c=>({...car, make:e.target.value}))
    }
        
    function handleModelChange(e){
        setCar(c=>({...car, model:e.target.value}))
         
    }

    return(<>
            <p>Your favourite car is: {car.year} {car.make} {car.model} </p>
            <input type="number"  value={car.year}  onChange={handleYearChange}/><br/>
            <input type="text"  value={car.make} onChange={handleMakeChange}/><br/>
            <input type="text"  value={car.model} onChange={handleModelChange}/><br/>
            </>
    )
}

export default MyComponenenet;