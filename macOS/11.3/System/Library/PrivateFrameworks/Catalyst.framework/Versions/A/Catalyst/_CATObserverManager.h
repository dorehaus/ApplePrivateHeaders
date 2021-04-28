/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATOperationObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject, CATOperation, NSString;

@interface _CATObserverManager : NSObject <CATOperationObserver> {

	NSMutableSet* mObservers;
	int mState;
	NSObject*<OS_dispatch_queue> mQueue;
	NSObject*<OS_dispatch_source> mProgressSource;
	CATOperation* mOperation;
	CATOperation* mStrongOperation;
	char mIsObserving;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithOperation:(id)arg1 ;
-(void)operationDidStart:(id)arg1 ;
-(void)operationDidProgress:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)notifyObserversOperationDidProgress:(id)arg1 ;
@end

