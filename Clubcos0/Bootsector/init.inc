READ_CYLINDERS equ 10									; 읽을 실린더 수
FLOPPY_SEGMENT equ 0x07e0								; 읽기 시작할 메모리의 세그먼트

KERNEL_SEGMENT equ ((0x07e0 * 0x10 + 0x4200 - 0x200) / 0x10)		; 커널의 위치 (0xc000 = 0x07e0 * 0x10 + 0x4200 - 0x200)