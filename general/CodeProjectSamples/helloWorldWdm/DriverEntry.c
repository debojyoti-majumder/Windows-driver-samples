#include <wdm.h>

NTSTATUS DriverEntry(
    PDRIVER_OBJECT pDriverObject, 
    PUNICODE_STRING pRegistryPath
) {
    UNREFERENCED_PARAMETER(pDriverObject);
    UNREFERENCED_PARAMETER(pRegistryPath);

    NTSTATUS retStatus = STATUS_SUCCESS;

    return retStatus;
}