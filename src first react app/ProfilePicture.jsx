function ProfilePicture() {
  const image="./src/assets/img1.png";
  // const handleClick = () => {console.log("OUCH!");}
  const handleClick = (e) => {e.target.style.display="none"; 

  }  
  
  return (
    <img onClick={handleClick} src={image} alt="ProfilePicture" />
  )
}
export default ProfilePicture;