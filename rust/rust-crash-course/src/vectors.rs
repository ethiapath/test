// Vectors are resizeable arrays

use std::mem;

pub fn run() {
  let mut numbers: Vec<i32> = vec![1, 2, 3, 4, 5];

  // Re-assign value
  numbers[2] = 20;

  // Add on to vector
  numbers.push(5);
  numbers.push(6);

  // Pop of last val
  // numbers.pop();
  println!("pop {:?}", numbers.pop());

  println!("{:?}", numbers);

  // Get single value
  println!("Single value: {}", numbers[0]);

  // Get vector length
  println!("Vecotr Length: {}", numbers.len());

  // Vector are stack allocated
  println!("Array occupeis: {}", mem::size_of_val(&numbers));

  // Get Slice
  let slice: &[i32] = &numbers[1..3];
  println!("Slice: {:?}", slice);

  // Loop through vecotr values
  for x in numbers.iter() {
    println!("Number: {}", x);
  }

  // Loop & mutate values
  for x in numbers.iter_mut() {
    *x *= 2;
  }
  // Loop through vecotr values
  for x in numbers.iter() {
    println!("Number: {}", x);
  }



  // for num in numbers {
  //   println!("{}", numj
  // }
}