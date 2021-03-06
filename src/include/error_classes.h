#include <mpi.h>

typedef enum ErrorClass
{
   Success = MPI_SUCCESS,
   Buffer = MPI_ERR_BUFFER,
   Count = MPI_ERR_COUNT,
   Type = MPI_ERR_TYPE,
   Tag = MPI_ERR_TAG,
   Comm = MPI_ERR_COMM,
   Rank = MPI_ERR_RANK,
   Request = MPI_ERR_REQUEST,
   Root = MPI_ERR_ROOT,
   Group = MPI_ERR_GROUP,
   Op = MPI_ERR_OP,
   Topology = MPI_ERR_TOPOLOGY,
   Dims = MPI_ERR_DIMS,
   Arg = MPI_ERR_ARG,
   Unknown = MPI_ERR_UNKNOWN,
   Truncate = MPI_ERR_TRUNCATE,
   Other = MPI_ERR_OTHER,
   Intern = MPI_ERR_INTERN,
   InStatus = MPI_ERR_IN_STATUS,
   Pending = MPI_ERR_PENDING,
   Access = MPI_ERR_ACCESS,
   AMode = MPI_ERR_AMODE,
   Assert = MPI_ERR_ASSERT,
   BadFile = MPI_ERR_BAD_FILE,
   Base = MPI_ERR_BASE,
   Conversrion = MPI_ERR_CONVERSION,
   Disp = MPI_ERR_DISP,
   DupDataRep = MPI_ERR_DUP_DATAREP,
   FileExists = MPI_ERR_FILE_EXISTS,
   FileInUse = MPI_ERR_FILE_IN_USE,
   File = MPI_ERR_FILE,
   InfoKey = MPI_ERR_INFO_KEY,
   InfoNoKey = MPI_ERR_INFO_NOKEY,
   InfoValue = MPI_ERR_INFO_VALUE,
   Info = MPI_ERR_INFO,
   IO = MPI_ERR_IO,
   KeyVal = MPI_ERR_KEYVAL,
   LockType = MPI_ERR_LOCKTYPE,
   Name = MPI_ERR_NAME,
   NoMem = MPI_ERR_NO_MEM,
   NotSame = MPI_ERR_NOT_SAME,
   NoSpace = MPI_ERR_NO_SPACE,
   NoSuchFile = MPI_ERR_NO_SUCH_FILE,
   Port = MPI_ERR_PORT,
   Quota = MPI_ERR_QUOTA,
   ReadOnly = MPI_ERR_READ_ONLY,
   RMAConflict = MPI_ERR_RMA_CONFLICT,
   RMASync = MPI_ERR_RMA_SYNC,
   Service = MPI_ERR_SERVICE,
   Size = MPI_ERR_SIZE,
   Spawn = MPI_ERR_SPAWN,
   UnsupportedDataRep = MPI_ERR_UNSUPPORTED_DATAREP,
   UnsupportedOperation = MPI_ERR_UNSUPPORTED_OPERATION,
   Win = MPI_ERR_WIN,
   LastCode = MPI_ERR_LASTCODE
};
