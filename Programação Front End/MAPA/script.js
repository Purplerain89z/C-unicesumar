function somar() {
    let qtHomem = document.getElementById("qtHomem").value;
    let qtMulher = document.getElementById("qtMulher").value;
    let qtCrianca = document.getElementById("qtCrianca").value;

    let homens = parseFloat(qtHomem);
    let mulheres = parseFloat(qtMulher);
    let criancas = parseFloat(qtCrianca);

    let carne = ((homens * 500) + (mulheres * 300) + (criancas * 200)) / 1000;
    let frango = ((homens * 200) + (mulheres * 200) + (criancas * 100)) / 1000;
    let linguica = ((homens + mulheres + criancas) * 200) / 1000;
    let refrigerante = ((homens * 300) + (mulheres * 400) + (criancas * 200)) / 1000;
    let cerveja = ((homens * 800) + (mulheres * 500)) / 1000;
    document.getElementById("carneB").textContent = (carne + " kg de carne bovina.");
    document.getElementById("frangoC").textContent = (frango + " kg de frango.");
    document.getElementById("linguic").textContent = (linguica + " kg de linguiça.");
    document.getElementById("refri").textContent = (refrigerante + " litros de refrigerante.");
    document.getElementById("cervej").textContent = (cerveja + " litros de cerveja.");
}