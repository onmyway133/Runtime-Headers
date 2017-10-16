/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
 */

@interface MDLVoxelArray : MDLObject {
    struct MDLAABB { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*maxBounds; 
    }  _bounds;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*minimumExtent; 
    }  _extent;
    float  _exteriorThickness;
    float  _interiorThickness;
    BOOL  _levelSet;
    struct unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree> > { 
        struct __compressed_pair<ModelIO::Octree *, std::__1::default_delete<ModelIO::Octree> > { 
            struct Octree {} *__first_; 
        } __ptr_; 
    }  _octreeData;
    void _originatingOffset;
    float  _voxelExtent;
    struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _voxels;
    struct MortonCode { 
        struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { 
                unsigned long long *__first_; 
            } __end_cap_; 
        } mortonkeyX; 
        struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { 
                unsigned long long *__first_; 
            } __end_cap_; 
        } mortonkeyY; 
        struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { 
                unsigned long long *__first_; 
            } __end_cap_; 
        } mortonkeyZ; 
    }  mortonCoder;
}

@property (nonatomic, readonly) struct { } boundingBox;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) BOOL isValidSignedShellField;
@property (nonatomic, readwrite) float shellFieldExteriorThickness;
@property (nonatomic, readwrite) float shellFieldInteriorThickness;
@property (nonatomic, readonly) struct { } voxelIndexExtent;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { })boundingBox;
- (struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; })boxesPerLayer;
- (id)coarseMesh;
- (id)coarseMeshUsingAllocator:(id)arg1;
- (id)coarseVoxelMeshWithStyle:(unsigned long long)arg1;
- (void)convertToSignedShellField;
- (unsigned long long)count;
- (void)differenceWithVoxels:(id)arg1;
- (void)dilateNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
- (void)erodeNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
- (void)indexOfSpatialLocation;
- (id)init;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
- (id)initWithData:(id)arg1 boundingBox:(struct { })arg2 voxelExtent:(float)arg3;
- (void)intersectWithVoxels:(id)arg1;
- (BOOL)isValidSignedShellField;
- (id)meshUsingAllocator:(id)arg1;
- (void)recalculateExtents;
- (void)setShellFieldExteriorThickness:(float)arg1;
- (void)setShellFieldInteriorThickness:(float)arg1;
- (void)setVoxelAtIndex;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
- (float)shellFieldExteriorThickness;
- (float)shellFieldInteriorThickness;
- (void)spatialLocationOfIndex;
- (void)unionWithVoxels:(id)arg1;
- (struct { })voxelBoundingBoxAtIndex;
- (BOOL)voxelExistsAtIndex:(void *)arg1 allowAnyX:(void *)arg2 allowAnyY:(void *)arg3 allowAnyZ:(void *)arg4 allowAnyShell:(void *)arg5; // needs 5 arg types, found 4: BOOL, BOOL, BOOL, BOOL
- (struct { })voxelIndexExtent;
- (id)voxelIndices;
- (id)voxelsWithinExtent:(struct { })arg1;

@end
