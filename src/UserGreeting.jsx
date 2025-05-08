//conditional rendering

function UserGreeting(props ) {
    const welcomeMessage = <>
                                <h1>Hello, {props.name}!</h1>
                                <h2>Welcome to the codebase</h2>
                            </>

    const guestMessage = <>
                            <h1>Hello, Guest!</h1>
                            <h2>Please log in to continue</h2>
                        </>                        
    return(props.isLoggedIn? welcomeMessage : guestMessage) ;
}
UserGreeting.propTypes = {
    name: PropTypes.string,
    isLoggedIn: PropTypes.bool,
};
UserGreeting.defaultProps = {
    name: "Guest",
    isLoggedIn: false,
};
export default UserGreeting;  