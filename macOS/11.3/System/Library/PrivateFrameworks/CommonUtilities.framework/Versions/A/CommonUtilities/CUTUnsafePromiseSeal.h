/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject {

	CUTUnsafePromise* _promise;

}

@property (nonatomic,retain) CUTUnsafePromise * promise;              //@synthesize promise=_promise - In the implementation block
-(id)init;
-(void)failWithError:(id)arg1 ;
-(void)fulfillWithValue:(id)arg1 ;
-(CUTUnsafePromise *)promise;
-(void)setPromise:(CUTUnsafePromise *)arg1 ;
@end
