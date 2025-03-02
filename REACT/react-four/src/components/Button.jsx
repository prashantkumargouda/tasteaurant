import React from 'react'

const Button = (props) => {
  return (
    <button onClick={props.increment}>
        {props.text}
    </button>
  )
}

export default Button
