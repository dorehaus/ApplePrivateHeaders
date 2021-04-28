/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/Versions/A/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/SZExtractorDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SZExtractor.h>

@protocol SZExtractorDelegate;
@class SZExtractor, IXPromisedStreamingZipTransferSeed, NSString;

@interface IXPromisedStreamingZipTransfer : IXOwnedDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor> {

	char _needsConsume;
	id<SZExtractorDelegate> _extractorDelegate;
	SZExtractor* _extractor;

}

@property (nonatomic,retain) IXPromisedStreamingZipTransferSeed * seed; 
@property (assign,getter=isComplete,nonatomic) char complete; 
@property (assign,nonatomic) unsigned long long archiveBytesConsumed; 
@property (nonatomic,retain) SZExtractor * extractor;                                       //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) char needsConsume;                                             //@synthesize needsConsume=_needsConsume - In the implementation block
@property (nonatomic,readonly) char useProgressFromSZExtractor; 
@property (nonatomic,readonly) char doesConsumeExtractedData; 
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate;              //@synthesize extractorDelegate=_extractorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(SZExtractor *)extractor;
-(void)setExtractor:(SZExtractor *)arg1 ;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setExtractionProgress:(double)arg1 ;
-(void)extractionCompleteAtArchivePath:(id)arg1 ;
-(void)extractionEnteredPassThroughMode;
-(void)setExtractorDelegate:(id<SZExtractorDelegate>)arg1 ;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(Class)seedClass;
-(unsigned long long)archiveBytesConsumed;
-(void)setArchiveBytesConsumed:(unsigned long long)arg1 ;
-(char)needsConsume;
-(void)setNeedsConsume:(char)arg1 ;
-(void)_prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)useProgressFromSZExtractor;
-(void)addArchiveBytesConsumed:(unsigned long long)arg1 ;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<SZExtractorDelegate>)extractorDelegate;
-(void)prepareForExtraction:(/*^block*/id)arg1 ;
-(char)consumeExtractedDataIfNeeded;
-(char)doesConsumeExtractedData;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 streamingZipOptions:(id)arg3 archiveSize:(unsigned long long)arg4 diskSpaceNeeded:(unsigned long long)arg5 ;
@end
