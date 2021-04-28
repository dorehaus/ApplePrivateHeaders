/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTPromise.h>

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise {

	CUTResult* _result;
	char _safe;

}

@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
-(id)initWithResult:(id)arg1 safe:(char)arg2 ;
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
@end
