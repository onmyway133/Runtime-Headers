/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLAttributeDescriptorArrayInternal * _attributeArray;
    unsigned long long  _indexBufferIndex;
    unsigned long long  _indexType;
    MTLBufferLayoutDescriptorArrayInternal * _vertexBufferArray;
}

+ (id)vertexDescriptor;

- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)indexBufferIndex;
- (unsigned long long)indexType;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)layouts;
- (id)newSerializedDescriptor;
- (void)reset;
- (void)setIndexBufferIndex:(unsigned long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2;

@end