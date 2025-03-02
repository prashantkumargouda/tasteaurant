import { useState } from 'react'
import './App.css'
import Cards from './components/Cards'

function App() {
  const [name,setName] = useState('Prashant') 


  return (
    <>
      <Cards title="Card1" name={name} setName = {setName} />
      <Cards title="Card2" name={name} setName = {setName} />
      {/* <p>I am inside Parent component and value of name is {name}</p> */}
    </>
  )
}

export default App
