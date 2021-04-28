/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Versions/A/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRIAllocationStatusProvider.h>

@class _PASXPCClientHelper, _PASLock;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {

	_PASXPCClientHelper* _clientHelper;
	_PASLock* _lock;

}
-(void)dealloc;
-(id)init;
-(id)_defaultQueue;
-(id)enumerateExperimentStatusesForEnvironment:(int)arg1 startingFromCursor:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(char)enumerateActiveExperimentsForEnvironment:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)addStatusUpdateHandlerForEnvironment:(int)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)removeUpdateHandlerForToken:(id)arg1 ;
-(id)syncProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

