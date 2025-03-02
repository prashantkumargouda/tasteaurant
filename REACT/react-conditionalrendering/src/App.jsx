import { useState } from 'react'
import './App.css'
import LogoutBtn from './component/LogoutBtn'
import LoginBtn from './component/LoginBtn'

function App() {
  const [isLoggedIn, setLoggedIn] = useState(false)

  if( !isLoggedIn ) {
    return(
      <LoginBtn/>
    )
  }
  return (
    <div>
      <h1>Hello welcome to my Prashants Page</h1>
      <div>
        {isLoggedIn && <LogoutBtn/>}
      </div>
    </div>
  )
  
  // return(
  //   <div>
  //     {isLoggedIn ? <LogoutBtn /> : <LoginBtn />}
  //   </div>
  // )
  // if(isLoggedIn){
  //   return (
  //     <LogoutBtn />
  //   )
  // }
  // else {
  //   return(
  //     <LoginBtn />
  //   )
  // }
}

export default App
