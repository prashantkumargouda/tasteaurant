import Button from "./components/Button";
import Card from "./components/Card" ;
import { useState } from "react";
import './App.css'

function App() {

    function handleClick() {
        setCount(count+1) ;
    }
  return (
    <>
        {/* <Button handleClick={handleClick} 
            text="click me"
        /> */}
      {/* <Card name="Prashant">
        <p>Hello to my react practice folder</p>
        <p>I am Prashant</p>
        <p>My life is a bit f**ed up and I am tired of my life</p>
        <p>I am bored</p>
      </Card>
      <Card children="mai ek child hun">
        main Prashant hun
      </Card> */}
    </>
  )
}

export default App
