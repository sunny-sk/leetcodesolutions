/**
 
*
**
***
****

 */

const row = 4;
const col = row;

for (let i = 1; i <= row; i++) {
  for (let j = 1; j <= i; j++) {
    process.stdout.write("*");
  }
  process.stdout.write("\n");
}
