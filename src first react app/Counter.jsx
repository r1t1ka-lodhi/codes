import React,{useState} from "react";

function Counter(){
    const [count ,setcount]=useState(0);

    const incerment=()=>{
        // setcount(count+1);
        setcount(c => c+1);//updater function
        setcount(c => c+1);

    }
    const decrement=()=>{
        setcount(c=>c-1);
        setcount(c=>c-1);

    }
    const reset=()=>{
        setcount(c=>c=0);

    }

    return(<div className="counter-container">
        <p className="count-display">{count}</p>
        <button className="counter-button" onClick={incerment}> Increment </button>
        <button className="counter-button" onClick={decrement}> Decrement </button>
        <button className="counter-button" onClick={reset}> Reset </button>

    </div>)

}
export default Counter;