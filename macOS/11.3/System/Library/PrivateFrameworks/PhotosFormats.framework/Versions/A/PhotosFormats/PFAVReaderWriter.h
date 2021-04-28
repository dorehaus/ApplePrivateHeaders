/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/PFRWSampleBufferChannelDelegate.h>

@protocol OS_dispatch_queue, PFAVReaderWriterAdjustDelegate;
@class NSObject, AVAssetReader, AVAssetWriter, NSArray, AVAsset, AVAssetWriterInput, NSURL, NSString;

@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate> {

	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	AVAssetReader* assetReader;
	AVAssetWriter* assetWriter;
	NSArray* videoChannels;
	NSArray* passthroughChannels;
	char cancelled;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	char _writeInProgress;
	SCD_Struct_PF3 _stillImagetime;
	id<PFAVReaderWriterAdjustDelegate> _delegate;
	AVAsset* _asset;
	AVAssetWriterInput* _metadataInput;
	NSURL* _outputURL;
	SCD_Struct_PF4 _timeRange;

}

@property (nonatomic,copy) AVAsset * asset;                                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * metadataInput;                              //@synthesize metadataInput=_metadataInput - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF4 timeRange;                                        //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                                                 //@synthesize outputURL=_outputURL - In the implementation block
@property (assign,nonatomic,__weak) id<PFAVReaderWriterAdjustDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PFAVReaderWriterAdjustDelegate>)delegate;
-(void)setDelegate:(id<PFAVReaderWriterAdjustDelegate>)arg1 ;
-(void)cancel;
-(void)setOutputURL:(NSURL *)arg1 ;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(NSURL *)outputURL;
-(void)setTimeRange:(SCD_Struct_PF4)arg1 ;
-(SCD_Struct_PF4)timeRange;
-(id)initWithAsset:(id)arg1 ;
-(void)writeToURL:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAsset:(id)arg1 stillImageTime:(SCD_Struct_PF3)arg2 ;
-(void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(opaqueCMSampleBufferRef)arg2 andMadeWriteSampleBuffer:(CVBufferRef)arg3 ;
-(AVAssetWriterInput *)metadataInput;
-(void)_didLoadAVAssetValues;
-(char)setUpReaderAndWriterReturningError:(id*)arg1 ;
-(char)startReadingAndWritingReturningError:(id*)arg1 ;
-(void)readingAndWritingDidFinishSuccessfully:(char)arg1 withError:(id)arg2 ;
-(void)setMetadataInput:(AVAssetWriterInput *)arg1 ;
@end

