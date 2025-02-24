import React from 'react'
import babbarpic from '../assets/babbar.jpg'
import './UserCard.css'


const UserCard = (props) => {
  return (
    <div className='user-container' style={props.style}>
      <p id='user-name'>{props.name}</p>
      <img src={props.image} alt="Babbar" className='user-img' />
      <p id='user-desc'>{props.desc}</p>
    </div>
  )
}

export default UserCard
