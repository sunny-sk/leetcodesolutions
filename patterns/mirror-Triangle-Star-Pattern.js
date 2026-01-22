/**
 

****
***
**
*

 */

const row = 4;
const col = row;

for (let i = row; i >= 1; i--) {
  for (let j = 1; j <= i; j++) {
    process.stdout.write("*");
  }
  process.stdout.write("\n");
}
