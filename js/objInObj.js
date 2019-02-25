

var city = {
    street: {
        house: {
            person: {
                person1: 'john',
                person2: 'sally'
            },
            stuff: 'things',
            color: 'red'
        },
        otherHouse: 'another house'
    },
    otherStreet: 'w 37th'
}
        
console.log(city[street][person][person1]);
