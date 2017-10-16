/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKPolygonalItemGroup : NSObject {
    NSMutableOrderedSet * _attributeSets;
    struct Box<float, 3> { 
        struct Matrix<float, 3, 1> { 
            float _e[3]; 
        } _minimum; 
        struct Matrix<float, 3, 1> { 
            float _e[3]; 
        } _maximum; 
    }  _boundingBox;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _centroid;
    float  _contentScale;
    unsigned int  _cullingMask;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
        struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _featureIds;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__begin_; 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__end_; 
        struct __compressed_pair<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
            struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__first_; 
        } __end_cap_; 
    }  _fillCullingGroups;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> > { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[152]; 
            struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> { 
                struct vector<std::__1::pair<unsigned short, unsigned int>, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                    struct pair<unsigned short, unsigned int> {} *__begin_; 
                    struct pair<unsigned short, unsigned int> {} *__end_; 
                    struct __compressed_pair<std::__1::pair<unsigned short, unsigned int> *, std::__1::allocator<std::__1::pair<unsigned short, unsigned int> > > { 
                        struct pair<unsigned short, unsigned int> {} *__first_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > > { 
                    struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *__begin_; 
                    struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *__end_; 
                    struct __compressed_pair<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > > { 
                        struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *__first_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::PolygonBase::CompressedVbo> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _vertexDataWrite; 
                struct DataWrite<unsigned short> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _indexDataWrite; 
                unsigned char _meshIndex; 
                unsigned short _meshVertexOffset; 
                unsigned int _meshIndexOffset; 
            } type; 
        } _value; 
    }  _fillMeshInfo;
    struct vector<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > > { 
        struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *__begin_; 
        struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > > { 
            struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *__first_; 
        } __end_cap_; 
    }  _fillMeshes;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher> > { 
        struct Batcher {} *__begin_; 
        struct Batcher {} *__end_; 
        struct __compressed_pair<ggl::Batcher *, std::__1::allocator<ggl::Batcher> > { 
            struct Batcher {} *__first_; 
        } __end_cap_; 
    }  _fillRenderItemBatchers;
    bool  _hasRouteAttributes;
    bool  _isFixedSize;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> >, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > > > > { 
        struct __hash_table<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::__unordered_map_hasher<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::hash<SectionKey>, true>, std::__1::__unordered_map_equal<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::hash<SectionKey>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::pair<void *, unsigned long>, std::__1::__hash_value_type<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > >, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _polygonEdges;
    struct PolygonRouteAttributes { 
        unsigned int routeSignificance; 
        unsigned char routeProximity; 
        bool hasRouteSignificance; 
    }  _routeAttributes;
    struct vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { 
        struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *__begin_; 
        struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > *, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { 
            struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *__first_; 
        } __end_cap_; 
    }  _selectedStyleQueries;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__begin_; 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__end_; 
        struct __compressed_pair<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
            struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__first_; 
        } __end_cap_; 
    }  _strokeCullingGroups;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher> > { 
        struct Batcher {} *__begin_; 
        struct Batcher {} *__end_; 
        struct __compressed_pair<ggl::Batcher *, std::__1::allocator<ggl::Batcher> > { 
            struct Batcher {} *__first_; 
        } __end_cap_; 
    }  _strokeRenderItemBatchers;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    struct vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { 
        struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *__begin_; 
        struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > *, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { 
            struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *__first_; 
        } __end_cap_; 
    }  _styleQueries;
    bool  _stylesUpToDate;
    float  _tileZoom;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__begin_; 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__end_; 
        struct __compressed_pair<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
            struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__first_; 
        } __end_cap_; 
    }  _venueCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__begin_; 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__end_; 
        struct __compressed_pair<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
            struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__first_; 
        } __end_cap_; 
    }  _venueEndCapCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__begin_; 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__end_; 
        struct __compressed_pair<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
            struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__first_; 
        } __end_cap_; 
    }  _venueWallHorizontalStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__begin_; 
        struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__end_; 
        struct __compressed_pair<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > > { 
            struct vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > {} *__first_; 
        } __end_cap_; 
    }  _venueWallVerticalStrokeCullingGroups;
}

@property (nonatomic, readonly) NSOrderedSet *attributeSets;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  centroid; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) unsigned int cullingMask;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>' */ struct *fillMeshes; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > >=^{shared_ptr<ggl::PolygonBase::CompressedMeshMesh>}}} */
@property (nonatomic, readonly) bool isFixedSize;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<float' */ struct *maxPoint; /* unknown property attribute:  1>=[3f]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<float' */ struct *origin; /* unknown property attribute:  1>=[3f]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >' */ struct *selectedStyleQueries; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > >=^{shared_ptr<gss::StylesheetQuery<gss::PropertyID> >}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  size; /* unknown property attribute:  1>=[3f]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >' */ struct *styleQueries; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > >=^{shared_ptr<gss::StylesheetQuery<gss::PropertyID> >}}} */
@property (nonatomic, readonly) float tileZoom;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributeSets;
- (bool)canAcceptPolygon:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; BOOL x21; unsigned int x22; }*)arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })centroid;
- (void)clearRouteAttributes;
- (const struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_1_1; struct Range<unsigned long> {} *x_1_1_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_2_1; } x_1_1_3; } x1; }*)commitRangesToFillRenderItemBatcher:(struct Batcher { struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct vector<gm::MultiRange<unsigned long>, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_2_1_1; struct MultiRange<unsigned long> {} *x_2_1_2; struct __compressed_pair<gm::MultiRange<unsigned long> *, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_3_2_1; } x_2_1_3; } x2; struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={type=[32C] {})arg4;
- (const struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_1_1; struct Range<unsigned long> {} *x_1_1_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_2_1; } x_1_1_3; } x1; }*)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(struct Batcher { struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct vector<gm::MultiRange<unsigned long>, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_2_1_1; struct MultiRange<unsigned long> {} *x_2_1_2; struct __compressed_pair<gm::MultiRange<unsigned long> *, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_3_2_1; } x_2_1_3; } x2; struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_1_1; struct Range<unsigned long> {} *x_1_1_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_2_1; } x_1_1_3; } x1; }*)commitRangesToStrokeRenderItemBatcher:(struct Batcher { struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct vector<gm::MultiRange<unsigned long>, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_2_1_1; struct MultiRange<unsigned long> {} *x_2_1_2; struct __compressed_pair<gm::MultiRange<unsigned long> *, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_3_2_1; } x_2_1_3; } x2; struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={type=[32C] {})arg4;
- (const struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_1_1; struct Range<unsigned long> {} *x_1_1_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_2_1; } x_1_1_3; } x1; }*)commitRangesToVenueWallEndCapRenderItemBatcher:(struct Batcher { struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct vector<gm::MultiRange<unsigned long>, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_2_1_1; struct MultiRange<unsigned long> {} *x_2_1_2; struct __compressed_pair<gm::MultiRange<unsigned long> *, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_3_2_1; } x_2_1_3; } x2; struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_1_1; struct Range<unsigned long> {} *x_1_1_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_2_1; } x_1_1_3; } x1; }*)commitRangesToVenueWallRenderItemBatcher:(struct Batcher { struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct vector<gm::MultiRange<unsigned long>, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_2_1_1; struct MultiRange<unsigned long> {} *x_2_1_2; struct __compressed_pair<gm::MultiRange<unsigned long> *, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_3_2_1; } x_2_1_3; } x2; struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_1_1; struct Range<unsigned long> {} *x_1_1_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_2_1; } x_1_1_3; } x1; }*)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(struct Batcher { struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct vector<gm::MultiRange<unsigned long>, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_2_1_1; struct MultiRange<unsigned long> {} *x_2_1_2; struct __compressed_pair<gm::MultiRange<unsigned long> *, std::__1::allocator<gm::MultiRange<unsigned long> > > { struct MultiRange<unsigned long> {} *x_3_2_1; } x_2_1_3; } x2; struct MultiRange<unsigned long> { struct vector<gm::Range<unsigned long>, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_1_2_1; struct Range<unsigned long> {} *x_1_2_2; struct __compressed_pair<gm::Range<unsigned long> *, std::__1::allocator<gm::Range<unsigned long> > > { struct Range<unsigned long> {} *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (unsigned int)cullingMask;
- (void)dealloc;
- (void)didFinishAddingData;
- (struct vector<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > > { struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *x1; struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > > { struct shared_ptr<ggl::PolygonBase::CompressedMeshMesh> {} *x_3_1_1; } x3; }*)fillMeshes;
- (bool)hasFeatureId:(unsigned long long)arg1;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (id)initWithStyleQuery:(struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3 contentScale:(float)arg4;
- (bool)isFixedSize;
- (unsigned char)maxAttributeSetsPerGroup;
- (const struct Matrix<float, 3, 1> { float x1[3]; }*)maxPoint;
- (const struct Matrix<float, 3, 1> { float x1[3]; }*)origin;
- (struct vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *x1; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *x2; struct __compressed_pair<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > *, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *x_3_1_1; } x3; }*)selectedStyleQueries;
- (void)setRouteAttributes:(const struct PolygonRouteAttributes { unsigned int x1; unsigned char x2; bool x3; }*)arg1;
- (struct Matrix<float, 3, 1> { float x1[3]; })size;
- (struct vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *x1; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *x2; struct __compressed_pair<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > *, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > > { struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > {} *x_3_1_1; } x3; }*)styleQueries;
- (float)tileZoom;
- (void)updateCachedStyles;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { int (**x1)(); }*)arg1;

@end
