/**
 
  *******
   *****
    ***
     *


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

for (let i = 0; i < row; i++) {
  for (let j = 0; j < col; j++) {
    if (i <= j && j <= col - 1 - i) {
      process.stdout.write("*");
    } else {
      process.stdout.write(" ");
    }
  }
  process.stdout.write("\n");
}
process.stdout.write("\n");
