/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVDepthData : NSObject {
    AVDepthDataInternal * _internal;
}

@property (atomic, readonly) NSArray *availableDepthDataTypes;
@property (atomic, readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (atomic, readonly) long long depthDataAccuracy;
@property (getter=isDepthDataFiltered, atomic, readonly) BOOL depthDataFiltered;
@property (atomic, readonly) struct __CVBuffer { }*depthDataMap;
@property (atomic, readonly) long long depthDataQuality;
@property (atomic, readonly) unsigned int depthDataType;

+ (id)_allSupportedDepthDataPixelFormatTypes;
+ (id)depthDataFromDictionaryRepresentation:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (struct __CVBuffer { }*)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned int)arg1;
- (struct __CFString { }*)auxiliaryImageType;
- (id)availableDepthDataTypes;
- (id)cameraCalibrationData;
- (struct CGImageMetadata { }*)copyAuxiliaryMetadata;
- (void)dealloc;
- (id)debugDescription;
- (id)depthBlurEffectRenderingParameters;
- (float)depthBlurEffectSimulatedAperture;
- (long long)depthDataAccuracy;
- (id)depthDataByApplyingExifOrientation:(unsigned int)arg1;
- (id)depthDataByConvertingToDepthDataType:(unsigned int)arg1;
- (id)depthDataByReplacingDepthDataMapWithPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)depthDataMap;
- (long long)depthDataQuality;
- (unsigned int)depthDataType;
- (short)depthDataVersionMajor;
- (short)depthDataVersionMinor;
- (id)description;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 auxiliaryMetadata:(struct CGImageMetadata { }*)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 depthMetadataDictionary:(id)arg2;
- (BOOL)isDepthDataFiltered;

@end
