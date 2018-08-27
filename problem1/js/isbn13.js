const calISBN13 = (isbn) => {
    const isbn_arr = isbn.toString().split('').map(x => parseInt(x))
    let sum = 0
    isbn_arr.forEach((num, index) => {
        sum += (index % 2 === 0 ? 1 : 3) * num
    })
    return (10 - sum % 10)
}

const res = calISBN13(978014300723)
console.log(res)