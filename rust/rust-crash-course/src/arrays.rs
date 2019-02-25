// Arrays - Fixed list where elemets are the same data type

use std::mem;

pub fn run() {
  let mut numbers: [i32; 5] = [1, 2, 3, 4, 5];

  // Re-assign value
  numbers[2] = 20;

  println!("{:?}", numbers);

  // Get single value
  println!("Single value: {}", numbers[0]);

  // Get array length
  println!("Array Length: {}", numbers.len());

  // Array are stack allocated
  println!("Array occupeis: {}", mem::size_of_val(&numbers));

  // Get Slice
  let slice: &[i32] = &numbers[1..3];
  println!("Slice: {:?}", slice);


  // Inumerate array with for in
  // for num in numbers {
  //   println!("{}", numj
  // }
}