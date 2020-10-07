let datas = [1, 2, 3];
function run(datas) {
  let temp = 0;
  for (let x of datas) {
    if (x > 0) {
      temp = temp + x;
    }
  }
  console.log(temp);
}
run(datas);
