#Framuino

Simple framework for Arduino

## Licence

![alt tag](https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png)

This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

## Documention
#### Time delay
method => "sec", "min", "millisec"
```arduino
wait(String method, int time);
```
For example this code delays of one second: 
```arduino
wait("sec", 1);
```

#### Debug
Debugging transmits of 13 (TX) and 12 (RX)
```arduino
debug.println();
```
