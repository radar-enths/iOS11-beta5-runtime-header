/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPhotoEncoderNode : BWNode {
    bool  _allowHEIFPrewarming;
    bool  _cameraSupportsFlash;
    struct FigPhotoCompressionSession { } * _compressionSession;
    bool  _croppingEnabled;
    bool  _heifEmbedThumb;
    bool  _heifForceCABAC;
    bool  _heifForceHEVC;
    float  _heifQualityOverride;
    unsigned long long  _heifThumbnailMaxPixelSize;
    int  _heifTileHeight;
    int  _heifTileWidth;
    bool  _heifUseTiling;
    NSDictionary * _inputColorInfo;
    FigCapturePixelConverter * _jpegPixelConverter;
    NSObject<OS_dispatch_group> * _previewGenerationGroup;
    NSObject<OS_dispatch_queue> * _previewGenerationQueue;
    FigCapturePixelConverter * _previewPixelConverter;
    long long  _prewarmedSettingsID;
    struct { 
        int width; 
        int height; 
    }  _sourceVideoDimensions;
    bool  _stillDuringVideoRecording;
    FigCapturePixelConverter * _thumbnailPixelConverter;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRectForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 requestedStillImageCaptureSettings:(id)arg2 whenEnabled:(bool)arg3;
+ (bool)_croppingRequiredForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageSettings:(id)arg2 whenEnabled:(bool)arg3;
+ (void)_updateMetadataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageSettings:(id)arg2 whenCroppingEnabled:(bool)arg3;
+ (void)initialize;

- (int)_addDepthFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_addMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3;
- (void)_addQualityOptionsToDictionary:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 metadata:(id)arg3 requestedStillImageCaptureSettings:(id)arg4 resolvedStillImageCaptureSettings:(id)arg5 forMainImage:(bool)arg6;
- (int)_addThumbnailFromBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 codecType:(unsigned int)arg6 maxPixelSize:(unsigned long long)arg7;
- (int)_addValue:(id)arg1 toAuxiliaryImageProperties:(struct CGImageMetadata { }*)arg2 namespace:(struct __CFString { }*)arg3 prefix:(struct __CFString { }*)arg4 key:(struct __CFString { }*)arg5;
- (id)_arrayInColumnMajorOrderFrom3x3MatrixData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)_arrayInColumnMajorOrderFrom3x4MatrixData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct __IOSurface { }*)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long*)arg1;
- (int)_defaultJPEGIndexedQTableForPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(bool*)arg5;
- (id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned int)arg2;
- (int)_encodePhotoForPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 outputSurfaceImageSize:(struct CGSize { double x1; double x2; }*)arg6;
- (int)_generatePreviewForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 previewPixelBuffer:(struct __CVBuffer {}**)arg4;
- (int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned int)arg1 destinationPixelFormat:(unsigned int)arg2;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1;
- (int)_scaleInputPixelBuffer:(struct __CVBuffer { }*)arg1 toDimensions:(struct { int x1; int x2; })arg2 colorSpaceProperties:(int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 thumbnailPixelBuffer:(struct __CVBuffer {}**)arg5;
- (id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1;
- (bool)cameraSupportsFlash;
- (bool)croppingEnabled;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3 forInput:(id)arg4;
- (id)init;
- (id)inputColorInfo;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setCameraSupportsFlash:(bool)arg1;
- (void)setCroppingEnabled:(bool)arg1;
- (void)setInputColorInfo:(id)arg1;
- (void)setSourceVideoDimensions:(struct { int x1; int x2; })arg1;
- (void)setStillDuringVideoRecording:(bool)arg1;
- (struct { int x1; int x2; })sourceVideoDimensions;
- (bool)stillDuringVideoRecording;

@end