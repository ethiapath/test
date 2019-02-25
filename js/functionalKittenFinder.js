const isKitten = cat => cat.months < 7
const getName = cat => cat.name
const getKittenNames = cats => 
  cats.filter(isKitten)
    .map(getName)

const cats = [
  { name: 'Mojo',    months: 84 },
  { name: 'Mao-Mao', months: 34 },
  { name: 'Waffles', months: 4 },
  { name: 'Pickles', months: 6 }
]

const kittens = getKittenNames(cats)

console.log(kittens)
