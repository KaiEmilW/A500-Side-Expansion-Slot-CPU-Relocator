#ifndef __HELPERS__
#define __HELPERS__

/*****************************************************************************/
/* Macros ********************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/* Defines *******************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/* Types *********************************************************************/
/*****************************************************************************/

typedef enum {
    
    readFileIdle = 0,
    readFileNoFileSpecified,
    readFileNotFound,
    readFileNoMemoryAllocated,
    readFileGeneralError,
    readFileOK
    
} tReadFileHandler;

/*****************************************************************************/
/* Prototypes ****************************************************************/
/*****************************************************************************/

extern tReadFileHandler readFileIntoMemoryHandler(char *fileName);
extern tReadFileHandler freeFileHandler(void);
extern tReadFileHandler getFileSize(char *fileName, ULONG * pFileSize);
extern void hexDump(char *desc, void *addr, int len);

#endif /* __HELPERS__ */