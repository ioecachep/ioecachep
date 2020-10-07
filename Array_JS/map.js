function run(data) {
  let b = data.map((num) => {
    return Math.abs(num);
  });
  console.log(b);
}
run([-1, 3, 2]);
run([-11, 3, -22, 15, -14]);
