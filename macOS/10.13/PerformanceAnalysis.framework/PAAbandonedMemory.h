/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAAbandonedMemory : NSObject <NSCoding> {
    NSMutableArray * bytesAbandoned;
    NSMutableArray * bytesLeaked;
    unsigned int  firstValidIteration;
    NSArray * iterationsMallocData;
    unsigned int  lastValidIteration;
    NSMutableArray * nodesAbandoned;
    NSMutableArray * nodesLeaked;
    NSString * procName;
    int  procPID;
    double  stdDevBytesAbandoned;
    double  stdDevBytesLeaked;
    double  stdDevNodesAbandoned;
    double  stdDevNodesLeaked;
    PAMallocData * summaryMallocData;
    unsigned long long  totalBytesAbandoned;
    unsigned long long  totalBytesLeaked;
    unsigned long long  totalNodesAbandoned;
    unsigned long long  totalNodesLeaked;
}

@property (atomic, readwrite, retain) NSMutableArray *bytesAbandoned;
@property (atomic, readwrite, retain) NSMutableArray *bytesLeaked;
@property (nonatomic, readwrite) unsigned int firstValidIteration;
@property (atomic, readwrite, retain) NSArray *iterationsMallocData;
@property (nonatomic, readwrite) unsigned int lastValidIteration;
@property (atomic, readwrite, retain) NSMutableArray *nodesAbandoned;
@property (atomic, readwrite, retain) NSMutableArray *nodesLeaked;
@property (atomic, readwrite, retain) NSString *procName;
@property (atomic, readwrite) int procPID;
@property (atomic, readwrite) double stdDevBytesAbandoned;
@property (atomic, readwrite) double stdDevBytesLeaked;
@property (atomic, readwrite) double stdDevNodesAbandoned;
@property (atomic, readwrite) double stdDevNodesLeaked;
@property (atomic, readwrite, retain) PAMallocData *summaryMallocData;
@property (atomic, readwrite) unsigned long long totalBytesAbandoned;
@property (atomic, readwrite) unsigned long long totalBytesLeaked;
@property (atomic, readwrite) unsigned long long totalNodesAbandoned;
@property (atomic, readwrite) unsigned long long totalNodesLeaked;

+ (id)getAbandonedMemoryFromArchive:(id)arg1 firstValidIteration:(unsigned int)arg2 lastValidIteration:(unsigned int)arg3;
+ (id)getAbandonedMemoryFromArchiveAtPath:(id)arg1 firstValidIteration:(unsigned int)arg2 lastValidIteration:(unsigned int)arg3;

- (void)accumulateToSummary:(id)arg1 isValid:(BOOL)arg2;
- (double)averageBytesAbandoned;
- (double)averageBytesLeaked;
- (double)averageNodesAbandoned;
- (double)averageNodesLeaked;
- (id)bytesAbandoned;
- (id)bytesLeaked;
- (id)dataSetDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)firstValidIteration;
- (void)getIterationSummaries;
- (id)initWithArchive:(id)arg1 usingProcess:(id)arg2 firstValidIteration:(unsigned int)arg3 lastValidIteration:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)iterationIndex:(unsigned int)arg1 categoryFlag:(int)arg2 reportDetails:(BOOL)arg3;
- (id)iterationsMallocData;
- (unsigned int)lastValidIteration;
- (id)nodesAbandoned;
- (id)nodesLeaked;
- (unsigned int)numIterations;
- (unsigned int)numValidIterations;
- (id)perIterationDetailed;
- (id)perIterationSummary;
- (id)procName;
- (int)procPID;
- (void)setBytesAbandoned:(id)arg1;
- (void)setBytesLeaked:(id)arg1;
- (void)setFirstValidIteration:(unsigned int)arg1;
- (void)setIterationsMallocData:(id)arg1;
- (void)setLastValidIteration:(unsigned int)arg1;
- (void)setNodesAbandoned:(id)arg1;
- (void)setNodesLeaked:(id)arg1;
- (void)setProcName:(id)arg1;
- (void)setProcPID:(int)arg1;
- (void)setStdDevBytesAbandoned:(double)arg1;
- (void)setStdDevBytesLeaked:(double)arg1;
- (void)setStdDevNodesAbandoned:(double)arg1;
- (void)setStdDevNodesLeaked:(double)arg1;
- (void)setSummaryMallocData:(id)arg1;
- (void)setTotalBytesAbandoned:(unsigned long long)arg1;
- (void)setTotalBytesLeaked:(unsigned long long)arg1;
- (void)setTotalNodesAbandoned:(unsigned long long)arg1;
- (void)setTotalNodesLeaked:(unsigned long long)arg1;
- (double)stdDevBytesAbandoned;
- (double)stdDevBytesLeaked;
- (double)stdDevNodesAbandoned;
- (double)stdDevNodesLeaked;
- (id)summary;
- (id)summaryMallocData;
- (unsigned long long)totalBytesAbandoned;
- (unsigned long long)totalBytesLeaked;
- (unsigned long long)totalNodesAbandoned;
- (unsigned long long)totalNodesLeaked;

@end
