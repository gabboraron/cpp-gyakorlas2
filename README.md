# A sorted_array_view osztály template, 
ahol egy hagyományos C/C++ tömböt (konstruktor paraméter) kell rendezetté alakítani, amíg a tömbön rajta van a view. Ha a view lekerül (élettartam végén) a tömb álljon vissza eredeti állapotára. Néhány utility a view-hoz: size, count, index_of, iterátor. A count és az index_of használja a rendezést, annak eldöntésére, hogy két érték mikor egyezik meg. 5-ösért egy funktor paramétert is lehessen megadni custom rendezéshez.


https://stackoverflow.com/questions/50985578/how-to-use-std-functions-in-template

