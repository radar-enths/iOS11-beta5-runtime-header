/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { 
        MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; 
        <MTLBuffer> *visibilityResultBuffer; 
        unsigned long long renderTargetWidth; 
        unsigned long long renderTargetHeight; 
        bool fineGrainedBackgroundVisibilityEnabled; 
        bool ditherEnabled; 
        bool openGLModeEnabled; 
        struct { 
            float x; 
            float y; 
        } customSamplePositions[4]; 
        unsigned long long numCustomSamplePositions; 
    }  _private;
}

+ (id)renderPassDescriptor;

- (const struct MTLRenderPassDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; bool x4; bool x5; bool x6; struct { float x_7_1_1; float x_7_1_2; } x7[4]; unsigned long long x8; }*)_descriptorPrivate;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)depthAttachment;
- (id)description;
- (bool)fineGrainedBackgroundVisibilityEnabled;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (bool)isDitherEnabled;
- (bool)isEqual:(id)arg1;
- (bool)openGLModeEnabled;
- (unsigned long long)renderTargetHeight;
- (unsigned long long)renderTargetWidth;
- (void)setDepthAttachment:(id)arg1;
- (void)setDitherEnabled:(bool)arg1;
- (void)setFineGrainedBackgroundVisibilityEnabled:(bool)arg1;
- (void)setOpenGLModeEnabled:(bool)arg1;
- (void)setRenderTargetHeight:(unsigned long long)arg1;
- (void)setRenderTargetWidth:(unsigned long long)arg1;
- (void)setSamplePositions:(const struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setStencilAttachment:(id)arg1;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)stencilAttachment;
- (bool)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3;
- (id)visibilityResultBuffer;

@end