let data = [-1, 2, 3, 4, 2, 6];
let data1 = [-1, 6];
function run(data) {
  let fistIndex = data.indexOf(2);
  let lastIndex = data.lastIndexOf(2);
  if (fistIndex == -1) {
    console.log("No result");
  } else console.log(fistIndex + " " + lastIndex);
}
run(data);
run(data1);
