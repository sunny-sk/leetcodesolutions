/**
 
  *
  **
  ***
  ****
  ***
  **
  *

 */

const row = 7;
const col = 4;

if (row <= col) {
  console.log("pattern not possible");
  return;
}

if (row - col !== col - 1) {
  console.log("pattern not possible=");
  return;
}

for (let i = 0; i <= row - col; i++) {
  for (let j = 0; j <= i; j++) {
    process.stdout.write("*");
  }
  process.stdout.write("\n");
}
for (let i = row - col; i >= 0; i--) {
  for (let j = 0; j <= i; j++) {
    process.stdout.write("*");
  }
  process.stdout.write("\n");
}
process.stdout.write("\n");
