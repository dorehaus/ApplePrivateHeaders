/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VCPTaskProcessingBatchRequestState : NSObject {

	NSMutableArray* _assetURLs;
	/*^block*/id _perAssetResultsHandler;

}
-(id)initWithAssetURLs:(id)arg1 andPerAssetResultsHandler:(/*^block*/id)arg2 ;
-(char)processResults:(id)arg1 andError:(id)arg2 forAssetURL:(id)arg3 ;
-(void)flushWithError:(id)arg1 ;
@end

