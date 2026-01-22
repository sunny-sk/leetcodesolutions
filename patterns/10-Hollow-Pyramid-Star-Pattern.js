/**
 
    *
   * *
  *   *
 *******

 */

const row = 4;
const col = 7;

if (col <= row) {
  console.log("pattern not possible");
  return;
}

if (col - row !== row - 1) {
  console.log("pattern not possible");
  return;
}

const HALF = Math.floor(col / 2);
const FULL = col - 1;

for (let k = 0; k < col; k++) {
  if (k === HALF) {
    process.stdout.write("*");
  } else {
    process.stdout.write(" ");
  }
}
process.stdout.write("\n");

for (let i = 1; i < row - 1; i++) {
  for (let j = 0; j < col - 1; j++) {
    if (j === HALF - i || j === HALF + i) {
      process.stdout.write("*");
    } else {
      process.stdout.write(" ");
    }
  }
  process.stdout.write("\n");
}

for (let k = 0; k < col; k++) {
  process.stdout.write("*");
}
process.stdout.write("\n");
