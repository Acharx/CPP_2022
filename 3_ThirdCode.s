Mem_Addr equ     0x20000040

         MOV     R0,#0x09
         MOV     R1,#0x11
         MOV     R2,#10
         
         ;LDR    Load memory adress/load memory content to register
         ;LDR    R3, =0x20000040
         
         LDR     R3, =Mem_Addr
         STR     R2, [R3] ;r2 pointed by register r3/ stored in this adress
         LDR     R0, [R3]

         MOV    R2,#0x04
         STR    R1,[R3,R2]
         
         ;STR     R1,[R3, #0x04] ; HER MEMORY BİRİMİ 4 BYTE ŞEKLİNDEDİR
