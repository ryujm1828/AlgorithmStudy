a = ''
b = ''

a = input()

if a == 'black':
    b += '0';
elif a == 'brown' :
    b += '1';
elif a == 'red' :
    b += '2';
elif a == 'orange' :
    b += '3';
elif a == 'yellow' :
    b += '4';
elif a == 'green' :
    b += '5';
elif a == 'blue' :
    b += '6';
elif a == 'violet' :
    b += '7';
elif a == 'grey' :
    b += '8';
elif a == 'white' :
    b += '9';

a = input()

if a == 'black':
    b += '0';
elif a == 'brown' :
    b += '1';
elif a == 'red' :
    b += '2';
elif a == 'orange' :
    b += '3';
elif a == 'yellow' :
    b += '4';
elif a == 'green' :
    b += '5';
elif a == 'blue' :
    b += '6';
elif a == 'violet' :
    b += '7';
elif a == 'grey' :
    b += '8';
elif a == 'white' :
    b += '9';

b = int(b)
a = input()

if a == 'black':
    b *= 1;
elif a == 'brown':
    b *= 10;
elif a == 'red':
    b *= 100;
elif a == 'orange':
    b *= 1000;
elif a == 'yellow':
    b *= 10000;
elif a == 'green':
    b *= 100000;
elif a == 'blue':
    b *= 1000000;
elif a == 'violet':
    b *= 10000000;
elif a == 'grey' :
    b *= 100000000;
elif a == 'white' :
    b *= 1000000000;

print(b)
