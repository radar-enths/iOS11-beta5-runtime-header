/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitLocalContrast : CIFilter {
    CIImage * inputImage;
    CIVector * inputScale;
    NSNumber * inputStrength;
}

+ (id)customAttributes;

- (id)_kernelLocalContrast;
- (id)outputImage;

@end
