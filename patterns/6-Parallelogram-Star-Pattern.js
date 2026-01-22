/**
 
      ****
    ****
  ****
****

 */

const row = 4;
const col = row;

for (let i = 0; i < row; i++) {
  for (let j = 0; j < col; j++) {
    process.stdout.write("*");
  }
  process.stdout.write("\n");
}
