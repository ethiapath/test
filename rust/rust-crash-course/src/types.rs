/*
Primitive Types
Integers: u8, i8, u16, i16, u32, i32, 
Floats: i32, u32
Bool
Char
Tuples
Arrays

*/
pub fn run() {
  // Default is "i32"
  let x = 1;

  // Default is "f64"
  let y = 2.5;


  // Add explicit type
  let z: i64 = 99999999999;

  // Find max size
  println!("Max i32: {}", std::i32::MAX);
  println!("Max i64: {}", std::i64::MAX);
}