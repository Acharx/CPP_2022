       MOV     R0, #0x89
       MOV     R1, #0x11
       MOV     R2, #0xAA

       LDR     R3, =0x2000004 ;use register 3 as a pointer
       ;       ldr ... i am storing memory location
       STR     R2, [R3]
       LDR     R0, [R3] ;LDR = low register operation
       ;sınırlıregistera sahibiz eğer dahafazla veri
       ;depolamak istersek memory'e depoluyoruz(week6 dk46.19)
