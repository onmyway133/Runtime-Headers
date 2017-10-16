/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDFlyover : PBCodable <NSCopying> {
    struct GEOPDCameraPathFrame { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; float x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; } * _cameraPaths;
    unsigned long long  _cameraPathsCount;
    unsigned long long  _cameraPathsSpace;
    struct { 
        unsigned int useSplines : 1; 
    }  _has;
    struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _labelFrames;
    unsigned long long  _labelFramesCount;
    unsigned long long  _labelFramesSpace;
    NSMutableArray * _labels;
    NSMutableArray * _notificationMessages;
    BOOL  _useSplines;
}

@property (nonatomic, readonly) struct GEOPDCameraPathFrame { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; float x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; }*cameraPaths;
@property (nonatomic, readonly) unsigned long long cameraPathsCount;
@property (nonatomic, readwrite) BOOL hasUseSplines;
@property (nonatomic, readonly) struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*labelFrames;
@property (nonatomic, readonly) unsigned long long labelFramesCount;
@property (nonatomic, readwrite, retain) NSMutableArray *labels;
@property (nonatomic, readwrite, retain) NSMutableArray *notificationMessages;
@property (nonatomic, readwrite) BOOL useSplines;

+ (Class)labelType;
+ (Class)notificationMessageType;

- (void).cxx_destruct;
- (void)addCameraPath:(struct GEOPDCameraPathFrame { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; float x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; })arg1;
- (void)addLabel:(id)arg1;
- (void)addLabelFrame:(struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addNotificationMessage:(id)arg1;
- (struct GEOPDCameraPathFrame { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; float x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; })cameraPathAtIndex:(unsigned long long)arg1;
- (struct GEOPDCameraPathFrame { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; float x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; }*)cameraPaths;
- (unsigned long long)cameraPathsCount;
- (void)clearCameraPaths;
- (void)clearLabelFrames;
- (void)clearLabels;
- (void)clearNotificationMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasUseSplines;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })labelFrameAtIndex:(unsigned long long)arg1;
- (struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)labelFrames;
- (unsigned long long)labelFramesCount;
- (id)labels;
- (unsigned long long)labelsCount;
- (void)mergeFrom:(id)arg1;
- (id)notificationMessageAtIndex:(unsigned long long)arg1;
- (id)notificationMessages;
- (unsigned long long)notificationMessagesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setCameraPaths:(struct GEOPDCameraPathFrame { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; float x9; float x10; float x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 1; unsigned int x_12_1_3 : 1; unsigned int x_12_1_4 : 1; unsigned int x_12_1_5 : 1; unsigned int x_12_1_6 : 1; unsigned int x_12_1_7 : 1; unsigned int x_12_1_8 : 1; unsigned int x_12_1_9 : 1; unsigned int x_12_1_10 : 1; unsigned int x_12_1_11 : 1; } x12; }*)arg1 count:(unsigned long long)arg2;
- (void)setHasUseSplines:(BOOL)arg1;
- (void)setLabelFrames:(struct GEOPDLabelFrame { float x1; unsigned int x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setLabels:(id)arg1;
- (void)setNotificationMessages:(id)arg1;
- (void)setUseSplines:(BOOL)arg1;
- (BOOL)useSplines;
- (void)writeTo:(id)arg1;

// GEOPDFlyover (Extras)

- (id)bestLocalizedLabelAtIndex:(unsigned long long)arg1;

// GEOPDFlyover (PlaceDataExtras)

+ (id)flyoverForPlaceData:(id)arg1;

- (id)bestLocalizedAnnouncementMessage;

@end
