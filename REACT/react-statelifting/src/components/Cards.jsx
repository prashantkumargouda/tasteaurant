import React from 'react'

const Cards = (props) => {
  return (
    <div>
      <input value = {props.name} type='text' onChange={(e) => {props.setName(e.target.value)}}/>
      <p> Namestate variable ki value inside card : {props.name} </p>
    </div>
  )
}

export default Cards
