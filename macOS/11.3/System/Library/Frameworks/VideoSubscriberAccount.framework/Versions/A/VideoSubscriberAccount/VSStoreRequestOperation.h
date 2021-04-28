/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSStoreRequest, VSOptional;

@interface VSStoreRequestOperation : VSAsyncOperation {

	int _requestCompletionFlag;
	VSStoreRequest* _request;
	VSOptional* _result;

}

@property (nonatomic,retain) VSOptional * result;                 //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) VSStoreRequest * request;              //@synthesize request=_request - In the implementation block
-(id)init;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)cancel;
-(VSStoreRequest *)request;
-(void)setRequest:(VSStoreRequest *)arg1 ;
-(void)executionDidBegin;
-(char)_isFirstToFinish;
@end

