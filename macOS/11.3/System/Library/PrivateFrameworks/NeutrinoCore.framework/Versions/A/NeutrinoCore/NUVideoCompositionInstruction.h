/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositionInstruction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary, NURenderJob, NSString, NURenderContext, NUComposition, NUColorSpace;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {

	NSMutableDictionary* _sourceIdentifiersByTrackID;
	NSArray* _requiredSourceTrackIDs;
	NURenderJob* _renderJob;
	NSString* _name;
	NURenderContext* _renderContext;
	NUComposition* _adjustmentComposition;
	NSArray* _pipelineFilters;
	NUColorSpace* _colorSpace;
	long long _sampleMode;
	SCD_Struct_NU8 _renderScale;
	SCD_Struct_NU16 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_NU16 timeRange;                          //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSArray * requiredSourceTrackIDs;                   //@synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs - In the implementation block
@property (assign,nonatomic,__weak) NURenderJob * renderJob;                     //@synthesize renderJob=_renderJob - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (retain) NURenderContext * renderContext;                              //@synthesize renderContext=_renderContext - In the implementation block
@property (nonatomic,retain) NUComposition * adjustmentComposition;              //@synthesize adjustmentComposition=_adjustmentComposition - In the implementation block
@property (nonatomic,retain) NSArray * pipelineFilters;                          //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU8 renderScale;                         //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                          //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) long long sampleMode;                               //@synthesize sampleMode=_sampleMode - In the implementation block
@property (nonatomic,readonly) char enablePostProcessing; 
@property (nonatomic,readonly) char containsTweening; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instructionForVideoTrack:(id)arg1 ;
+(id)instructionFromBase:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(NURenderContext *)renderContext;
-(long long)sampleMode;
-(void)setTimeRange:(SCD_Struct_NU16)arg1 ;
-(SCD_Struct_NU16)timeRange;
-(SCD_Struct_NU8)renderScale;
-(char)enablePostProcessing;
-(char)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
-(void)setRenderScale:(SCD_Struct_NU8)arg1 ;
-(void)setRenderContext:(NURenderContext *)arg1 ;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(void)setSampleMode:(long long)arg1 ;
-(NSArray *)pipelineFilters;
-(void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2 ;
-(id)sourceIdentifierForTrackID:(id)arg1 ;
-(char)isEqualToInstruction:(id)arg1 ;
-(void)setRequiredSourceTrackIDs:(NSArray *)arg1 ;
-(NURenderJob *)renderJob;
-(void)setRenderJob:(NURenderJob *)arg1 ;
-(NUComposition *)adjustmentComposition;
-(void)setAdjustmentComposition:(NUComposition *)arg1 ;
@end

