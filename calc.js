function main() {

  let operation, again;

  console.log("===== Kalkulator Sederhana =====");
  console.log();
  do {
    console.log("Pilih Operasi Aritmatika:");
    console.log("1. Penjumlahan");
    console.log("2. Pengurangan");
    console.log("3. Perkalian");
    console.log("4. Pembagian");
    console.log("5. Perpangkatan");
    console.log("6. Akar Pangkat");
    console.log("7. Modulus");
    console.log();


    operation = parseInt(prompt("Pilihan Anda: "));


    switch (operation) {
      case 1:
        sum();
        break;
      case 2:
        difference();
        break;
      case 3:
        product();
        break;
      case 4:
        quotient();
        break;
      case 5:
        power();
        break;
      case 6:
        squareRoot();
        break;
      case 7:
        modulus();
        break;
      default:
        console.log("Pilihan tidak valid. Silahkan pilih 1-7.");
    }

    again = prompt("Ulangi kalkulasi? (Y/T)").toUpperCase();
  } while (again === "Y");

  console.log("Terima kasih telah menggunakan kalkulator!");
}


function sum() {
  let num1, num2, result;
  num1 = parseFloat(prompt("Masukkan Bilangan Pertama: "));
  num2 = parseFloat(prompt("Masukkan Bilangan Kedua: "));
  result = num1 + num2;
  console.log(`Hasil Penjumlahan: ${result}`);
}

function difference() {
  let num1, num2, result;
  num1 = parseFloat(prompt("Masukkan Bilangan Pertama: "));
  num2 = parseFloat(prompt("Masukkan Bilangan Kedua: "));
  result = num1 - num2;
  console.log(`Hasil Pengurangan: ${result}`);
}

function product() {
  let num1, num2, result;
  num1 = parseFloat(prompt("Masukkan Bilangan Pertama: "));
  num2 = parseFloat(prompt("Masukkan Bilangan Kedua: "));
  result = num1 * num2;
  console.log(`Hasil Perkalian: ${result}`);
}


function quotient() {
  let num1, num2, result;
  num1 = parseFloat(prompt("Masukkan Bilangan Pertama: "));
  num2 = parseFloat(prompt("Masukkan Bilangan Kedua: "));
  result = num1 / num2;
  console.log(`Hasil Pembagian: ${result}`);
}


function power() {
  let num, pow, result;
  num = parseFloat(prompt("Masukkan Bilangan: "));
  pow = parseInt(prompt("Masukkan Pangkat: "));
  result = Math.pow(num, pow);
  console.log(`Hasil Perpangkatan: ${result}`);
}


function squareRoot() {
  let num, result;
  num = parseFloat(prompt("Masukkan Bilangan: "));
  result = Math.sqrt(num);
  console.log(`Hasil Akar Pangkat: ${result}`);
}


function modulus() {
  let num1, num2, result;
  num1 = parseInt(prompt("Masukkan Bilangan: "));
  num2 = parseInt(prompt("Masukkan Pembagi: "));
  result = num1 % num2;
  console.log(`Hasil Modulus: ${result}`);
}

main();
