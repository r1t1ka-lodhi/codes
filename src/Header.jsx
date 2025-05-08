import image from "./assets/img1.jpg";

function Header(){

    return(
        <header>
            {/* <h1>MY WEBSITE</h1>
            <nav>
                <ul>
                    <li>Home</li>
                    <li>Help</li>
                    <li>About</li>
                </ul>
            </nav> */}
            <div className="card">
                <img src={image} alt="Profile picture" />
                <h2 className="card-tittle">RitikaLodhi</h2>
                <p className="card-text">I am an engineering student amd love coding</p>
            </div>
        </header>
    );

}
export default Header