/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTPromise;

@interface CUTPromiseSeal : NSObject {

	CUTPromise* _promise;

}

@property (nonatomic,retain) CUTPromise * promise;              //@synthesize promise=_promise - In the implementation block
-(void)failWithError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)fulfillWithValue:(id)arg1 ;
-(CUTPromise *)promise;
-(void)setPromise:(CUTPromise *)arg1 ;
@end

