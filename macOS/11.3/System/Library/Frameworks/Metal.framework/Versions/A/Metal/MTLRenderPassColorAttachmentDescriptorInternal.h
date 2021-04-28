/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptor.h>

@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(void)setYInvert:(char)arg1 ;
-(char)yInvert;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(id)texture;
-(void)setTexture:(id)arg1 ;
-(id)resolveTexture;
-(void)setResolveTexture:(id)arg1 ;
-(unsigned long long)loadAction;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(void)setClearColor:(SCD_Struct_MT108)arg1 ;
-(unsigned long long)storeAction;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)setStoreActionOptions:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(unsigned long long)slice;
-(SCD_Struct_MT108)clearColor;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setSlice:(unsigned long long)arg1 ;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(unsigned long long)depthPlane;
-(unsigned long long)storeActionOptions;
-(unsigned long long)resolveLevel;
-(unsigned long long)resolveSlice;
-(unsigned long long)resolveDepthPlane;
@end

