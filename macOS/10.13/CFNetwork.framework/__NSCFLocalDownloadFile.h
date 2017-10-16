/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface __NSCFLocalDownloadFile : NSObject {
    int  _error;
    <__NSCFLocalDownloadFileOpener> * _fileProvider;
    id  _finishCompletion;
    BOOL  _finished;
    NSString * _path;
    BOOL  _skipUnlink;
    struct stat { 
        int st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned long long st_ino; 
        unsigned int st_uid; 
        unsigned int st_gid; 
        int st_rdev; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_birthtimespec; 
        long long st_size; 
        long long st_blocks; 
        int st_blksize; 
        unsigned int st_flags; 
        unsigned int st_gen; 
        int st_lspare; 
        long long st_qspare[2]; 
    }  _stat;
    BOOL  _truncateFile;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_io> * _writeIO;
}

@property (atomic, readwrite) int error;
@property (atomic, readwrite) <__NSCFLocalDownloadFileOpener> *fileProvider;
@property (atomic, readwrite, copy) id finishCompletion;
@property (atomic, readwrite, retain) NSString *path;
@property (atomic, readwrite) BOOL skipUnlink;
@property (atomic, readwrite) BOOL truncateFile;

- (void)captureFile:(id*)arg1 outStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg2;
- (void)dealloc;
- (int)error;
- (id)fileProvider;
- (id)fileURL;
- (id)finishCompletion;
- (void)finishOnQueue:(id)arg1 completion:(id)arg2;
- (id)initQueues;
- (id)initTempFileWithDirectory:(id)arg1;
- (id)initWithExistingFile:(id)arg1 expectedSize:(long long)arg2;
- (id)initWithExistingUnopenableFile:(id)arg1 fileProvider:(id)arg2;
- (id)initWithFullPath:(id)arg1;
- (id)ioChannel;
- (id)path;
- (void)setError:(int)arg1;
- (void)setFileProvider:(id)arg1;
- (void)setFinishCompletion:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSkipUnlink:(BOOL)arg1;
- (void)setTruncateFile:(BOOL)arg1;
- (BOOL)skipUnlink;
- (void)truncate;
- (BOOL)truncateFile;
- (void)writeBytes:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3;

@end
