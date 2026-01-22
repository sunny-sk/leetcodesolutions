/**
 
  ******
  *    *
  *    *
  ******

 */

const row = 4;
const col = 6;

for (let i = 0; i < row; i++) {
  for (let j = 0; j < col; j++) {
    if (i === 0 || i == row - 1 || j == 0 || j == col - 1) {
      process.stdout.write("*");
    } else {
      process.stdout.write(" ");
    }
  }
  process.stdout.write("\n");
}