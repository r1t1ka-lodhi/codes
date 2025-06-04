function Button(){

    const handleClick = () => {
        alert("OUCH! You clicked me 😌");
        
    }
    // return(<button onClick={handleClick}>Click Me 😌</button>)
    
    const handleClick2 = (name) => console.log(`${name} stop clicking me`);
    // return(<button onClick={()=>handleClick2("Ritika")}>Click Me 😌</button>)
    
    const handleClick3 = (event) => {
        event.target.textContent = "Clicked!";
        event.target.style.backgroundColor = "green";
    }
    return(<button onClick={(event)=>handleClick3(event)}>Click Me 😌</button>)
}
export default Button;