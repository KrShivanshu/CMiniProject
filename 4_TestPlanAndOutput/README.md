# TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN**   | **Exp OUT**      | **Actual Out** |  
|-------------|--------------------------------------------------------------|------------  |------------------|----------------|
|  H_01       |  Proceed only when right input is given   |      0       |0 is not allowed. | 0              | 
|  H_02       |  Return what receive within range in options menu  |      5       | 5 | 5              |
|  H_03       |  Maintain the sign of input in result  | op = -8 | -800 | -800 |
|  H_04       |  Recieve input of operand as double and options as integer | op = 100.25, unit_selected = 5 | Proceed | Proeceeded |
|  H_04       |   | op = @ , unit_selected = t | Error | Error |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Operand can be positive - convert_length(double op, int from, int to); |  1,2,1     |     1000      |       20000       |Requirement based |
|  L_02       | Operand can ne negative - convert_temperature(double op, int from, int to); |  -150,2,3   |    -729.67    |       -729.67       |Requirement based |
|  L_03       | Operand can be fractional - convert_temperature(double op, int from, int to);|  212.05,3,1  |    100.02778   |     100.02778        |Requirement based |
|  L_04       | Operand can be 0 - convert_time(double op, int from, int to)|  0,1,2  |    0     |      0         |Requirement based |
|  L_05       |  Result can be very big - convert_area(double op, int from, int to); | 2.5,4,8 |      38750077.500155002 |         38750077.500155002 |Requirement based |
|  L_05       |  Result can be very small -  convert_time(double op, int from, int to); | 10,3,8 |      0.000000000003803     |          0.000000000003803     |Requirement based |