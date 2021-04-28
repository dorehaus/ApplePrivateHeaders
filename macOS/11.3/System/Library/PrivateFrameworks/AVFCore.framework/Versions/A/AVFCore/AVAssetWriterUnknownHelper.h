/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {

	short _alternateGroupID;

}
-(void)setDelegate:(id)arg1 ;
-(long long)status;
-(void)setMetadata:(id)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_CM3)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_CM3)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(char)arg1 ;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_CM3)arg1 ;
-(void)setInitialSegmentStartTime:(SCD_Struct_CM3)arg1 ;
-(void)setOutputFileTypeProfile:(id)arg1 ;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(void)setProducesCombinableFragments:(char)arg1 ;
-(id)initWithDataWritingDelegate:(id)arg1 fileType:(id)arg2 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 ;
-(char)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(char)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)startWriting;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3 ;
-(char)_canAddInput:(id)arg1 exceptionReason:(id*)arg2 ;
-(char)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2 ;
@end

