def calISBN13(isbn)
    isbn_str_arr = isbn.to_s.split('').each_with_index.map{ |el, index| el.to_i * (index % 2 === 0 ? 1 : 3) }
    sum = 0
    isbn_str_arr.each { |x| sum += x }
    puts (10 - sum % 10)
end

calISBN13(978014300723)