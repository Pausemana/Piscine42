cat phonebook | grep -i "^nicolas" | grep -i "bauer" | tr "\t" ! | cut -d ! -f 3 | grep -E "^[0-9]"
