function run() {
  var person = {
    name: "Tuan Phong",
    age: 1,
    addr: "Ha Noi",
    is_boy: true,
  };
  for (let x in person) {
    console.log(x + " is " + person[x]);
  }
}
run();
