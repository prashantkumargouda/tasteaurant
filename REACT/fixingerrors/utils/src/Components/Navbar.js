import React from 'react'
// import { Link } from 'react-router-dom'

export default function Navbar(props) {
  return (
    <div>
        <nav className= {`navbar navbar-expand-lg bg-${props.mode} navbar-${props.mode}`}>
            <div className="container-fluid ">
                {/* <Link className="navbar-brand" to="/">{props.title}</Link> */}
                <a className="navbar-brand" href="#">{props.title}</a>
                <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                <span className="navbar-toggler-icon"></span>
                </button>
                <div className="collapse navbar-collapse" id="navbarSupportedContent">
                <ul className="navbar-nav me-auto mb-2 mb-lg-0">
                    <li className="nav-item">
                    {/* <Link className="nav-link active" aria-current="page" to="/">Home</Link> */}
                    <a className="nav-link active" aria-current="page" href="#">Home</a>
                    </li>
                    <li className="nav-item"> 
                    {/* <Link className="nav-link" to="/about">{props.aboutText}</Link> */}
                    {/* <a className="nav-link" href="/about">{props.aboutText}</a> */}
                    </li>
                </ul>
                <div className= {`form-check form-switch text-${props.mode === 'light' ? 'dark' : 'light'}`}>
                    <input className="form-check-input" type="checkbox" role="switch" id="switchCheckDefault" onClick={props.toggleMode} />
                    <label className="form-check-label" for="switchCheckDefault">Dark Mode</label>
                </div>
                
                </div>
            </div>
        </nav>
    </div>
  )
}
