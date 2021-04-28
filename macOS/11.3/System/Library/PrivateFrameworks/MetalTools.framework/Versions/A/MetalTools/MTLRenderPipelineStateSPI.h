/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLDebugInstrumentationData;


@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState>
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * vertexDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * fragmentDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * tileDebugInstrumentationData; 
@optional
-(unsigned long long)gpuAddress;
-(unsigned long long)resourceIndex;

@required
-(unsigned long long)uniqueIdentifier;
-(MTLDebugInstrumentationData *)tileDebugInstrumentationData;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(long long)textureWriteRoundingMode;
-(id)newVertexShaderDebugInfo;
-(id)newFragmentShaderDebugInfo;
-(unsigned)getVertexShaderTelemetryID;
-(unsigned)getFragmentShaderTelemetryID;

@end

