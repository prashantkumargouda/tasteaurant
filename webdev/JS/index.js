

function changeText()  {
    let fpara = document.getElementById('fpara'); 
    fpara.textContent = 'Hello World!' ;
}

let fpara = document.getElementById('fpara'); 

fpara.addEventListener('click', changeText);