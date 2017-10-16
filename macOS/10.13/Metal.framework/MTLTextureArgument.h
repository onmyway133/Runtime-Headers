/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLTextureArgument : MTLArgumentInternal {
    unsigned int  _isDepthTexture;
    unsigned short  _textureDataType;
    unsigned int  _textureType;
}

- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(BOOL)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(bool)arg8;
- (BOOL)isDepthTexture;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;

@end
