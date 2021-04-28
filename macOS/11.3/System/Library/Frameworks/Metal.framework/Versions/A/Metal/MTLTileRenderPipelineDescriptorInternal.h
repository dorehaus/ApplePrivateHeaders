/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {

	MTLTileRenderPipelineDescriptorPrivate _private;

}
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(void)setThreadgroupSizeMatchesTileSize:(char)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
-(long long)textureWriteFPRoundingMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)tileFunction;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(unsigned long long)sampleCount;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLTileRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(id)colorAttachments;
-(long long)textureWriteRoundingMode;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)reset;
-(id)pluginData;
-(void)setPluginData:(id)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(id)binaryArchives;
-(void)setBinaryArchives:(id)arg1 ;
-(void)setTileFunction:(id)arg1 ;
-(char)threadgroupSizeMatchesTileSize;
-(unsigned long long)rasterSampleCount;
-(unsigned long long)colorSampleCount;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(char)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)tileBuffers;
@end

