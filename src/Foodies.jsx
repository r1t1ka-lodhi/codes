export default  function Foodies(){
    const food1 = "Pizza";
    const food2 = "Burger";

    const food3 = "Pasta";
    const food4 = "Salad";
    return(
        <ul>
            <li>Apple</li>
            <li>mango</li>
            <li>{food1}</li>
            <li>{food2.toUpperCase()}</li>
        </ul>
    );

}