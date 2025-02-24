import UserCard from "./components/UserCard"
import tejas from './assets/tejas.jpg'
import su30 from './assets/su30mki.webp'
import rafale from './assets/rafale.webp'

function App() {
  return (
    <>
      <div>
        <UserCard name="Love" desc="Prahsnt kumaer" image={tejas} style={{"border-radius":"10px"}}/>
        <UserCard name="Prashant" desc="PRahntkakvlwncin" image={rafale} style={{"border-radius":"10px"}}/>
        <UserCard name="Prashant" desc="Prahcsevsbusbv ki" image={su30} style={{"border-radius":"10px"}}/>
      </div>
    </>
  )
}

export default App
