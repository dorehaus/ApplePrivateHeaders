/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMutableArray, NSObject, NSArray;

@interface NURenderTransaction : NSObject {

	long long _nestingLevel;
	NSMutableArray* _requests;
	NSObject*<OS_dispatch_group> _group;

}

@property (readonly) NSArray * pendingRequests; 
+(void)commit;
+(void)begin;
+(id)currentTransaction;
+(void)_commit:(id)arg1 ;
+(void)group:(/*^block*/id)arg1 ;
+(void)setCurrentTransaction:(id)arg1 ;
+(id)ensureCurrentTransaction;
+(id)assertCurrentTransaction;
+(void)commitAndNotifyOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)withCurrentTransaction:(/*^block*/id)arg1 ;
-(id)init;
-(char)commit;
-(char)begin;
-(void)flush;
-(void)submitRequest:(id)arg1 ;
-(NSArray *)pendingRequests;
-(void)notifyCompletion:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)submitPendingRequests;
-(void)resetPendingRequests;
@end
