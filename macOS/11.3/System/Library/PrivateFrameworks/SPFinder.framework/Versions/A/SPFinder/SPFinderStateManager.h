/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/Versions/A/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPFinder/SPFinderStateManagement.h>

@protocol SPFinderStateXPCProtocol, OS_dispatch_queue;
@class FMXPCServiceDescription, FMXPCSession, NSObject, NSString;

@interface SPFinderStateManager : NSObject <SPFinderStateManagement> {

	/*^block*/id stateInfoChangedBlock;
	/*^block*/id _stateChangedBlock;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPFinderStateXPCProtocol> _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPFinderStateXPCProtocol> proxy;                        //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id stateChangedBlock;                                        //@synthesize stateChangedBlock=_stateChangedBlock - In the implementation block
@property (nonatomic,copy) id stateInfoChangedBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<SPFinderStateXPCProtocol>)proxy;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(id)remoteInterface;
-(void)setProxy:(id<SPFinderStateXPCProtocol>)arg1 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(id)stateChangedBlock;
-(void)setStateChangedBlock:(id)arg1 ;
-(void)fetchFinderState:(/*^block*/id)arg1 ;
-(void)enableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(void)disableFinderModeWithCompletion:(/*^block*/id)arg1 ;
-(void)stateInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setActiveCache:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateStateBlock;
-(id)stateInfoChangedBlock;
-(void)setStateInfoChangedBlock:(id)arg1 ;
@end

