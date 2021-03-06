/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _errorCode;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _handlerReturnStatus;
    NSMutableArray * _handlerReturnStatusDatas;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic, readwrite) unsigned int errorCode;
@property (nonatomic, readonly) unsigned int*handlerReturnStatus;
@property (nonatomic, readonly) unsigned long long handlerReturnStatusCount;
@property (nonatomic, readwrite, retain) NSMutableArray *handlerReturnStatusDatas;
@property (nonatomic, readwrite) BOOL hasErrorCode;

+ (Class)handlerReturnStatusDataType;

- (void)addHandlerReturnStatus:(unsigned int)arg1;
- (void)addHandlerReturnStatusData:(id)arg1;
- (void)clearHandlerReturnStatus;
- (void)clearHandlerReturnStatusDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (unsigned int*)handlerReturnStatus;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)handlerReturnStatusCount;
- (id)handlerReturnStatusDataAtIndex:(unsigned long long)arg1;
- (id)handlerReturnStatusDatas;
- (unsigned long long)handlerReturnStatusDatasCount;
- (BOOL)hasErrorCode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHandlerReturnStatus:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHandlerReturnStatusDatas:(id)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
