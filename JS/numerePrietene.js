

// Functia pentru calcularea divizorilor
function sumaDivizoriPropri(num) {
    let suma = 0;
    for (let i = 1; i < num; i++) {
      if (num % i == 0) {
        suma += i;
      }
    }
    return suma;
}

//Functia principala
 function numarPrieten() {
    const numar = parseFloat(prompt("Introduceți un număr:"));

    const sumaDivizoriNumar = sumaDivizoriPropri(numar);
  
    if (sumaDivizoriNumar != numar) {
      alert(`${numar} nu este un număr prieten.`);
    } else {
      const altNumar = sumaDivizoriPropri(sumaDivizoriNumar);
      if (altNumar == numar) {
        alert(`${numar} este un număr prieten.`);
      } else {
        alert(`${numar} nu este un număr prieten.`);
      }
    }
 }

let DaButton = document.getElementById("DaClick").addEventListener("click", function(){numarPrieten()});

