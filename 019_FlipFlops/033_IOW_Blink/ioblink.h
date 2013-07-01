#ifndef _IO_BLINK_
#define _IO_BLINK_
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#ifdef _WIN32
#define IOWKIT_API __stdcall
#else
#define IOWKIT_API
#define _IOW_WINTYPES_H_

typedef unsigned long          ULONG;
typedef long                   LONG;
typedef unsigned short         USHORT;
typedef unsigned short         WORD;
typedef unsigned char          UCHAR;
typedef unsigned char          BYTE;
typedef char *                 PCHAR;
typedef unsigned short *       PWCHAR;
typedef int                    BOOL;
typedef unsigned char          BOOLEAN;
typedef unsigned long          DWORD;
typedef DWORD *                PDWORD;
typedef void *                 PVOID;
typedef DWORD                  HANDLE;
typedef ULONG *                PULONG;
typedef const char *           PCSTR;
typedef const unsigned short * PWCSTR;

#define FALSE 0
#define TRUE 1

#endif // _WIN32

#define IOWKIT_VENDOR_ID         0x07c0
#define IOWKIT_VID               IOWKIT_VENDOR_ID
#define IOWKIT_PRODUCT_ID_IOW24  0x1501
#define IOWKIT_PID_IOW24         IOWKIT_PRODUCT_ID_IOW24
#define IOWKIT_MAX_PIPES    2
#define IOW_PIPE_IO_PINS      0
#define IOW_PIPE_SPECIAL_MODE 1
#define IOWKIT_MAX_DEVICES  16
#define IOW_OPEN_SIMPLE     1
#define IOW_OPEN_COMPLEX    2
#define IOW_NON_LEGACY_REVISION 0x1010
#pragma pack(push, 1)

typedef struct _IOWKIT24_IO_REPORT
 {
  UCHAR ReportID;
  union
   {
    WORD Value;
    BYTE Bytes[2];
   };
 }
  IOWKIT24_IO_REPORT, *PIOWKIT24_IO_REPORT;

#define IOWKIT24_IO_REPORT_SIZE sizeof(IOWKIT24_IO_REPORT)
#pragma pack(pop)

typedef PVOID IOWKIT_HANDLE;

// Function prototypes
IOWKIT_HANDLE IOWKIT_API IowKitOpenDevice(void);
void IOWKIT_API IowKitCloseDevice(IOWKIT_HANDLE devHandle);
ULONG IOWKIT_API IowKitWrite(IOWKIT_HANDLE devHandle, ULONG numPipe,
  PCHAR buffer, ULONG length);
ULONG IOWKIT_API IowKitRead(IOWKIT_HANDLE devHandle, ULONG numPipe,
  PCHAR buffer, ULONG length);
ULONG IOWKIT_API IowKitReadNonBlocking(IOWKIT_HANDLE devHandle, ULONG numPipe,
  PCHAR buffer, ULONG length);
BOOL IOWKIT_API IowKitReadImmediate(IOWKIT_HANDLE devHandle, PDWORD value);
ULONG IOWKIT_API IowKitGetNumDevs(void);
IOWKIT_HANDLE IOWKIT_API IowKitGetDeviceHandle(ULONG numDevice);
BOOL IOWKIT_API IowKitSetLegacyOpenMode(ULONG legacyOpenMode);
ULONG IOWKIT_API IowKitGetProductId(IOWKIT_HANDLE devHandle);
ULONG IOWKIT_API IowKitGetRevision(IOWKIT_HANDLE devHandle);
HANDLE IOWKIT_API IowKitGetThreadHandle(IOWKIT_HANDLE devHandle);
BOOL IOWKIT_API IowKitGetSerialNumber(IOWKIT_HANDLE devHandle, PWCHAR serialNumber);
BOOL IOWKIT_API IowKitSetTimeout(IOWKIT_HANDLE devHandle, ULONG timeout);
BOOL IOWKIT_API IowKitSetWriteTimeout(IOWKIT_HANDLE devHandle, ULONG timeout);
BOOL IOWKIT_API IowKitCancelIo(IOWKIT_HANDLE devHandle, ULONG numPipe);
PCSTR IOWKIT_API IowKitVersion(void);

#endif // _IO_BLINK_