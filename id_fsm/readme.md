status 2'b00 -> illegal or nothing
status 2'b01 -> only alphabets
status 2'b10 -> right output

| status | input | next status | output |
| ------ | ----- | ----------- | ------ |
| 2'b00  | 2'b00 | 2'b00       | 0 |
| 2'b00  | 2'b01 | 2'b01       | 0 |
| 2'b00  | 2'b10 | 2'b00       |0|
| 2'b01  | 2'b00 | 2'b00 | 0 |
| 2'b01  | 2'b01 | 2'b01 | 0 |
| 2'b01  | 2'b10 | 2'b10 | 1 |
| 2'b10  | 2'b00 | 2'b00 | 0 |
| 2'b10  | 2'b01 | 2'b01 | 0 |
| 2'b10  | 2'b10 | 2'b10 | 1 |

