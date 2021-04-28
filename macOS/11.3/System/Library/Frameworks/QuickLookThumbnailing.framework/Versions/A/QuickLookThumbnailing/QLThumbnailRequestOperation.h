/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, QLThumbnailGenerationRequest, QLThumbnailRepresentation, NSError;

@interface QLThumbnailRequestOperation : NSOperation {

	char _finished;
	char _executing;
	NSDate* _beginDate;
	/*^block*/id _requestUpdateBlock;
	/*^block*/id _requestCompletionBlock;
	NSObject*<OS_dispatch_queue> _serialResponseQueue;
	QLThumbnailGenerationRequest* _request;
	/*^block*/id _thumbnailRequestGenerationWillStartBlock;
	QLThumbnailRepresentation* _mostRepresentativeThumbnail;
	NSError* _thumbnailRequestInvalidError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialResponseQueue;                     //@synthesize serialResponseQueue=_serialResponseQueue - In the implementation block
@property (retain) QLThumbnailGenerationRequest * request;                                         //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id thumbnailRequestGenerationWillStartBlock;                            //@synthesize thumbnailRequestGenerationWillStartBlock=_thumbnailRequestGenerationWillStartBlock - In the implementation block
@property (nonatomic,retain) QLThumbnailRepresentation * mostRepresentativeThumbnail;              //@synthesize mostRepresentativeThumbnail=_mostRepresentativeThumbnail - In the implementation block
@property (nonatomic,retain) NSError * thumbnailRequestInvalidError;                               //@synthesize thumbnailRequestInvalidError=_thumbnailRequestInvalidError - In the implementation block
@property (nonatomic,copy) id requestUpdateBlock;                                                  //@synthesize requestUpdateBlock=_requestUpdateBlock - In the implementation block
@property (nonatomic,copy) id requestCompletionBlock;                                              //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) double minimumDimension; 
@property (assign,nonatomic) unsigned long long requestedTypes; 
+(id)operationWithThumbnailRequest:(id)arg1 ;
-(void)start;
-(void)cancel;
-(void)main;
-(QLThumbnailGenerationRequest *)request;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(char)isAsynchronous;
-(id)requestCompletionBlock;
-(void)setRequest:(QLThumbnailGenerationRequest *)arg1 ;
-(void)setExecuting:(char)arg1 ;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(double)minimumDimension;
-(id)initWithFPItem:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(char)arg5 ;
-(id)initWithThumbnailRequest:(id)arg1 ;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(char)arg4 ;
-(void)setRequestedTypes:(unsigned long long)arg1 ;
-(id)sharedSerialResponseQueue;
-(void)setMinimumDimension:(double)arg1 ;
-(void)setWantsBaseline:(char)arg1 ;
-(char)wantsBaseline;
-(void)setGenerationBehavior:(long long)arg1 ;
-(long long)generationBehavior;
-(unsigned long long)badgeType;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(void)__finishWithError:(id)arg1 ;
-(void)setRequestUpdateBlock:(id)arg1 ;
-(char)_finishIfNeeded;
-(id)requestUpdateBlock;
-(id)thumbnailRequestGenerationWillStartBlock;
-(void)_finish;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(unsigned long long)requestedTypes;
-(void)_finishIfRequestIsInvalid;
-(NSObject*<OS_dispatch_queue>)serialResponseQueue;
-(void)setSerialResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setThumbnailRequestGenerationWillStartBlock:(id)arg1 ;
-(QLThumbnailRepresentation *)mostRepresentativeThumbnail;
-(void)setMostRepresentativeThumbnail:(QLThumbnailRepresentation *)arg1 ;
-(NSError *)thumbnailRequestInvalidError;
-(void)setThumbnailRequestInvalidError:(NSError *)arg1 ;
@end

