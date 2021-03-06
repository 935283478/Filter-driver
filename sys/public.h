#ifndef _PUBLIC_H
#define _PUBLIC_H

#define IOCTL_INDEX             0x800

#define IOCTL_KBFILTR_GET_KEYBOARD_ATTRIBUTES CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_INDEX,    \
                                                        METHOD_BUFFERED,    \
                                                        FILE_READ_DATA)

#define IOCTL_KBFILTR_ON        CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+1, METHOD_BUFFERED, FILE_ANY_ACCESS) 
#define IOCTL_KBFILTR_OFF       CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+2, METHOD_BUFFERED, FILE_ANY_ACCESS) 
#define IOCTL_KBFILTR_GET_STATE CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+3, METHOD_BUFFERED, FILE_READ_DATA)
#define IOCTL_KBFILTR_GET_CHAR  CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+4, METHOD_BUFFERED, FILE_READ_DATA)

#endif

