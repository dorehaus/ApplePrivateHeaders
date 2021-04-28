/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTPromise.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, CUTResult;

@interface _CUTPromise : CUTPromise {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	char _done;
	CUTResult* _result;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) char done;                                       //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                              //@synthesize result=_result - In the implementation block
-(void)_fulfillWithResult:(id)arg1 ;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_dispatch_group>)group;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)done;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(void)setDone:(char)arg1 ;
@end

