/**
 
****
*  *
*  *
****

 */


let row = 4;
for (let i = 0; i < row; i++) {
  for (let j = 0; j < row; j++) {
    if (j == 0 || j == row - 1 || i == 0 || i == row - 1) {
      process.stdout.write("*");
    } else {
      process.stdout.write("-");
    }
  }
  process.stdout.write("\n");
}
