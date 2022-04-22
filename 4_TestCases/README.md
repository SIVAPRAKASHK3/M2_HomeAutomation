# IN SIMULATION COLUMN 1-> " 1 " REPRESENT -----> SIMULATION 1
# IN SIMULATION COLUMN 1-> " 2 " REPRESENT-----> SIMULATION 2
|SIMULATION |  ID   | TEST | EXPECTED RESULT | RESULT  | PASS/FAIL |
|-------------| ----- | ----------- | --------------- | ------  | --------- |
| 1 |TC 1 |   F  |  MOTOR ON |  MOTOR  ON| PASS  |
| 1 |TC 2 |   f   |  MOTOR OFF  |  MOTOR OFF | PASS  |
| 1 |TC 3 |   L |  LED ON  | GLOW | PASS  |
| 1 |TC 4 |   l|  LED OFF | GLOW | PASS  |
| 1 |TC 5| ANY OTHER KEY|NO EFFECT|NO EFFECT|-|
| 2 |TC 6 |   SWITCH ON   |  MOTOR ON |  MOTOR ON | PASS  |
| 2 |TC 7 |   SWITCH OFF   |  MOTOR OFF |  MOTOR OFF | PASS  |
