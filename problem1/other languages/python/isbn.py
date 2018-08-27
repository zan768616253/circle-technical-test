def calISBN13(isbn):

    isbn_arr = tuple(int(item) * (1 if index % 2 == 0 else 3) for index, item in enumerate(str(isbn)))
    sum = 0
    for item in isbn_arr:
        sum += item
    return (10 - sum % 10)

print calISBN13(978014300723)