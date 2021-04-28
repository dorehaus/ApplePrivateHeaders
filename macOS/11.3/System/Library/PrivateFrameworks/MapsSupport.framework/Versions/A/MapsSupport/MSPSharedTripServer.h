/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSPReceiverETAControllerDelegate.h>
#import <libobjc.A.dylib/MSPSenderETAControllerDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripAvailabiltyDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripXPCServer.h>

@class MSPSenderETAController, MSPReceiverETAController, MSPSharedTripRelay, NSXPCListener, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;

@interface MSPSharedTripServer : NSObject <NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer> {

	MSPSenderETAController* _sendingController;
	MSPReceiverETAController* _receivingController;
	MSPSharedTripRelay* _idsRelay;
	NSXPCListener* _listener;
	NSMutableSet* _connections;
	NSMutableDictionary* _connectionSubscriptionsByTripID;
	NSMapTable* _peersByConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)connections;
-(void)createControllers;
-(void)createXPCListener;
-(void)cleanConnections;
-(void)checkinWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopSharingTripWithContacts:(id)arg1 ;
-(void)stopSharingTripWithMessagesGroup:(id)arg1 ;
-(void)stopSharingTrip;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1 ;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1 ;
-(void)blockSharedTrip:(id)arg1 ;
-(void)_setNotificationCenter:(id)arg1 ;
-(char)_connectionCanControlReceiving:(id)arg1 ;
-(char)_connectionCanControlSharing:(id)arg1 ;
-(id)_subscribedConnectionsForTripID:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2 ;
-(void)etaController:(id)arg1 sharedTripDidClose:(id)arg2 ;
-(void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2 ;
-(void)senderController:(id)arg1 didInvalidateSharedTripWithError:(id)arg2 ;
-(void)invalidateActiveHandlesForSenderController:(id)arg1 ;
-(void)relay:(id)arg1 accountStatusChanged:(char)arg2 ;
-(void)_purgeSubscriptionsForConnection:(id)arg1 ;
@end

