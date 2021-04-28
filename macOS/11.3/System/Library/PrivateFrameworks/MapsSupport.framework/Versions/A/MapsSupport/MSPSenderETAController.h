/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPNavigationListenerDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripGroupSessionDelegate.h>
#import <libobjc.A.dylib/MSPSenderMessageStrategyDelegate.h>

@protocol OS_os_transaction, MSPSenderETAControllerDelegate;
@class NSObject, MSPNavigationListener, NSMutableSet, MSPSharedTripRelay, MSPSharedTripGroupSession, MSPSenderMinimalStrategy, MSPSenderLiveStrategy, MSPSenderMessageStrategy, MSPGroupSessionStorage, MSPSharedTripStorageController, NSArray, NSString;

@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate> {

	NSObject*<OS_os_transaction> _transaction;
	MSPNavigationListener* _navigationListener;
	NSMutableSet* _destinations;
	MSPSharedTripRelay* _idsRelay;
	MSPSharedTripGroupSession* _groupSession;
	MSPSenderMinimalStrategy* _minimalSender;
	MSPSenderLiveStrategy* _liveSender;
	MSPSenderMessageStrategy* _messageSender;
	MSPGroupSessionStorage* _sessionStorage;
	MSPSharedTripStorageController* _storageController;
	NSObject*<MSPSenderETAControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * activeHandles; 
@property (assign,nonatomic,__weak) NSObject*<MSPSenderETAControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<MSPSenderETAControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<MSPSenderETAControllerDelegate>)arg1 ;
-(id)initWithRelay:(id)arg1 ;
-(NSArray *)activeHandles;
-(char)startSharingWith:(id)arg1 error:(id*)arg2 ;
-(char)startSharingWithMessages:(id)arg1 error:(id*)arg2 ;
-(char)startSharingWithGroup:(id)arg1 error:(id*)arg2 ;
-(void)stopSharingWith:(id)arg1 ;
-(void)stopSharingWithGroup:(id)arg1 ;
-(void)stopSharing;
-(void)groupSession:(id)arg1 participantDidJoin:(id)arg2 ;
-(void)groupSession:(id)arg1 participantDidLeave:(id)arg2 ;
-(void)groupSessionEnded:(id)arg1 withError:(id)arg2 ;
-(void)navigationListenerIsReady:(id)arg1 ;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2 ;
-(void)navigationListenerStopped:(id)arg1 ;
-(void)navigationListenerETAUpdated:(id)arg1 ;
-(void)navigationListenerDestinationUpdated:(id)arg1 ;
-(void)navigationListenerRouteUpdated:(id)arg1 ;
-(void)navigationListenerTrafficUpdated:(id)arg1 ;
-(void)navigationListenerArrived:(id)arg1 ;
-(void)_restoreLastSession;
-(void)_createGroupSessionIfNeededWithIdentifier:(id)arg1 ;
-(void)_invalidateActiveHandles;
-(void)_startNavigationListener;
-(char)_validateNavigationState:(id*)arg1 ;
-(void)_startingGroupSession;
-(void)_updateStorage;
-(void)_sendFinishedToIdentifiers:(id)arg1 ;
-(void)_cleanObjects;
-(void)_stopNavigationListener;
-(void)_invalidateSharedTripWithError:(id)arg1 ;
-(id)rulesForParticipant:(id)arg1 ;
-(void)touchedRules;
@end
