/**
 
    *
   **
  ***
 ****
  ***
   **
    *

 */

const row = 9;
const col = 5;

if (row <= col) {
  console.log("pattern not possible");
  return;
}

if (row - col !== col - 1) {
  console.log("pattern not possible=");
  return;
}

// part 1
for (let i = 0; i <= row - col; i++) {
  for (let j = 0; j <= col - 1; j++) {
    if (j >= col - i - 1) {
      process.stdout.write("*");
    } else {
      process.stdout.write(" ");
    }
  }
  process.stdout.write("\n");
}
// part 2
for (let i = row - col + 1; i < row; i++) {
  for (let j = 0; j <= col - 1; j++) {
    if (i - j <= col - 1) {
      process.stdout.write("*");
    } else {
      process.stdout.write(" ");
    }
  }
  process.stdout.write("\n");
}
