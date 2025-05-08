//rendering lists

function List(){
    const fruits = [{name:'Apple' ,calories: 52},
          {name:'Banana' ,calories: 89},
          {name:'Cherry' ,calories: 50},
          {name:'Date' ,calories: 282},
          {name:'Elderberry' ,calories: 73}];
    // fruits.sort((a,b) =>a.name.localeCompare(b.name)) ;//ALPHABETICAL ORDER
    // fruits.sort((a,b) =>b.name.localeCompare(a.name)) ;// REVERSE ALPHABETICAL ORDER
    // fruits.sort((a,b) => a.calories - b.calories); //CALORIES ORDER
    
    // const lowerCalories = fruits.filter((fruit) => fruit.calories > 70); //FILTERING CALORIES < 100
    // const listItems = lowerCalories.map((lowerCalorie) => <li key={lowerCalorie.name}>Name:{lowerCalorie.name}: &nbsp;  Calories:{lowerCalorie.calories}</li>)
    
    
    const listItems = fruits.map((fruit) => <li key={fruit.name}>Name:{fruit.name}: &nbsp;  Calories:{fruit.calories}</li>);
    return (<ol>{listItems} </ol>);
}
export default List;