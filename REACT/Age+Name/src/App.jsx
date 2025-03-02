import React, { useState } from 'react'

function App() {
  const [name,setName] = useState('Prashant') 
  const [age,setAge] = useState(20) 

  function handleChange(e) {
    setName(e.target.value) ;
  } 

  function increment() {
    setAge(age+1) ;
  }
  return (
    <>
      <input type='text' 
        value={name} 
        onChange={handleChange}
      />

      <button onClick={increment}>increment Age</button>
      <p>Hello {name} your age is {age} </p>
    </>
  )
}

export default App
