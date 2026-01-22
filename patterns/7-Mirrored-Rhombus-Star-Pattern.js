/**
 
      ****
    ****
  ****
****

 */

const row = 4;
const col = row;

for (let i = 0; i < row; i++) {
  for (k = 0; k < row - 1 - i; k++){
    process.stdout.write(" ");
  }
  for (let j = 0; j < col; j++) {
    process.stdout.write("*");
  }
  process.stdout.write("\n");
}
