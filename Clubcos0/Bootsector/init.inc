READ_CYLINDERS equ 10									; ���� �Ǹ��� ��
FLOPPY_SEGMENT equ 0x07e0								; �б� ������ �޸��� ���׸�Ʈ

KERNEL_SEGMENT equ ((0x07e0 * 0x10 + 0x4200 - 0x200) / 0x10)		; Ŀ���� ��ġ (0xc000 = 0x07e0 * 0x10 + 0x4200 - 0x200)