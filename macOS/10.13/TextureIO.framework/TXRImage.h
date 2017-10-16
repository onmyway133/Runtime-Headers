/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
 */

@interface TXRImage : NSObject <NSCopying> {
    <TXRBuffer> * _buffer;
    unsigned long long  _bytesPerImage;
    unsigned long long  _bytesPerRow;
    <TXRDataSourceProvider> * _dataSourceProvider;
    unsigned long long  _element;
    NSError * _error;
    long long  _face;
    unsigned long long  _level;
    unsigned long long  _offset;
}

@property (atomic, readonly) <TXRBuffer> *buffer;
@property (atomic, readonly) unsigned long long bytesPerImage;
@property (atomic, readonly) unsigned long long bytesPerRow;
@property (atomic, readonly) NSError *error;
@property (atomic, readonly) unsigned long long offset;

- (void).cxx_destruct;
- (id)buffer;
- (unsigned long long)bytesPerImage;
- (unsigned long long)bytesPerRow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deferredProvide;
- (id)error;
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 dataSourceProvider:(id)arg4;
- (id)initWithBytesPerRow:(unsigned long long)arg1 bytesPerImage:(unsigned long long)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4;
- (unsigned long long)offset;

@end
