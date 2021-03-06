#ifndef PIC_h_
#define PIC_h_

#include "Clubcos0.h"

#define MASTER_PIC_PORT1 0x20
#define MASTER_PIC_PORT2 0x21

#define SLAVE_PIC_PORT1 0xa0
#define SLAVE_PIC_PORT2 0xa1

#define PIC_INTERRUPT_NUMBER 0x20

/* IRQ 번호 */
#define PIC_IRQ_TIMER			0
#define PIC_IRQ_KEYBOARD		1
#define PIC_IRQ_SLAVE			2
#define PIC_IRQ_SERIAL1			3
#define PIC_IRQ_SERIAL2			4
#define PIC_IRQ_PARALLEL1		5
#define PIC_IRQ_FLOPPY			6
#define PIC_IRQ_PARALLEL2		7
#define PIC_IRQ_RTC				8
#define PIC_IRQ_MOUSE			12
#define PIC_IRQ_COPROCESSER		13
#define PIC_IRQ_HARDDISK1		14
#define PIC_IRQ_HARDDISK2		15

/* 인터럽트 번호 */
#define INTERRUPT_NUMBER_TIMER			(PIC_INTERRUPT_NUMBER + PIC_IRQ_TIMER)
#define INTERRUPT_NUMBER_KEYBOARD		(PIC_INTERRUPT_NUMBER + PIC_IRQ_KEYBOARD)
#define INTERRUPT_NUMBER_SLAVE			(PIC_INTERRUPT_NUMBER + PIC_IRQ_SLAVE)
#define INTERRUPT_NUMBER_SERIAL1		(PIC_INTERRUPT_NUMBER + PIC_IRQ_SERIAL1)
#define INTERRUPT_NUMBER_SERIAL2		(PIC_INTERRUPT_NUMBER + PIC_IRQ_SERIAL2)
#define INTERRUPT_NUMBER_PARALLEL1		(PIC_INTERRUPT_NUMBER + PIC_IRQ_PARALLEL1)
#define INTERRUPT_NUMBER_FLOPPY			(PIC_INTERRUPT_NUMBER + PIC_IRQ_FLOPPY)
#define INTERRUPT_NUMBER_PARALLEL2		(PIC_INTERRUPT_NUMBER + PIC_IRQ_PARALLEL2)
#define INTERRUPT_NUMBER_RTC			(PIC_INTERRUPT_NUMBER + PIC_IRQ_RTC)
#define INTERRUPT_NUMBER_MOUSE			(PIC_INTERRUPT_NUMBER + PIC_IRQ_MOUSE)
#define INTERRUPT_NUMBER_COPROCESSER	(PIC_INTERRUPT_NUMBER + PIC_IRQ_COPROCESSER)
#define INTERRUPT_NUMBER_HARDDISK1		(PIC_INTERRUPT_NUMBER + PIC_IRQ_HARDDISK1)
#define INTERRUPT_NUMBER_HARDDISK2		(PIC_INTERRUPT_NUMBER + PIC_IRQ_HARDDISK2)

/* 인터럽트 허가 설정 비트 */
#define PIC_TIMER			(1 << PIC_IRQ_TIMER)
#define PIC_KEYBOARD		(1 << PIC_IRQ_KEYBOARD)
#define PIC_SLAVE			(1 << PIC_IRQ_SLAVE)
#define PIC_SERIAL1			(1 << PIC_IRQ_SERIAL1)
#define PIC_SERIAL2			(1 << PIC_IRQ_SERIAL2)
#define PIC_PARALLEL1		(1 << PIC_IRQ_PARALLEL1)
#define PIC_FLOPPY			(1 << PIC_IRQ_FLOPPY)
#define PIC_PARALLEL2		(1 << PIC_IRQ_PARALLEL2)
#define PIC_RTC				(1 << PIC_IRQ_RTC)
#define PIC_MOUSE			(1 << PIC_IRQ_MOUSE)
#define PIC_COPROCESSER		(1 << PIC_IRQ_COPROCESSER)
#define PIC_HARDDISK1		(1 << PIC_IRQ_HARDDISK1)
#define PIC_HARDDISK2		(1 << PIC_IRQ_HARDDISK2)

void InitPic();
void SetPicInterrupt(WORD irqs);

void SendEOI(BYTE irq);

#endif // PIC_h_
