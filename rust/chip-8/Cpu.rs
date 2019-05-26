pub struct Cpu {
    // index register
    pub i: u16,

    // program counter
    pup pc: u16,
    // memory
    pup memory: [ u8; 4096 ],
    // registers
    pup v: [ u8; 16],
    pup keypad: Keypad,
    pup display: Display,
    pup stack: [ u16; 16],
    // stack pointer
    pup sp: u8,
    // delay timer
    pup dt: u8
}

