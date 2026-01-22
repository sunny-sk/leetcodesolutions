/**
 
****
  ****
    ****
      ****

 */

let row = 4;
let col = row;
for (let i = 0; i < row; i++) {
  // adding space before star for second row
  for (let k = 1; k <= i; k++) {
    process.stdout.write(" ");
  }
  for (let j = 0; j < col; j++) {
    process.stdout.write("*");
  }
  process.stdout.write("\n");
}
