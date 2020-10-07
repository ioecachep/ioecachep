const soChanLe = (currentValue) => {
  return currentValue % 2 == 0;
};

function run(data) {
  var x = data.every(soChanLe);
  if (x) {
    console.log("Yes");
  } else {
    console.log("No");
  }
}
run([1, 2, 3]);
