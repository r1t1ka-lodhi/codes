function Student(props ) {
    return (
      <div className="student-card">
        <p>Name: {props.name}</p>
          <p>Age: {props.age}</p>
          <p>isStudent: {props.isStudent?"Yes" :"NO"}</p>
          
      </div>
    );
  }

  Student.protoTypes = {
    name: PropTypes.string,
    age: PropTypes.number,
    isStudent: PropTypes.bool,
  };
  Student.defaultProps = {
    name: "Guest",
    age: 0,
    isStudent: false,
  };
  export default Student;