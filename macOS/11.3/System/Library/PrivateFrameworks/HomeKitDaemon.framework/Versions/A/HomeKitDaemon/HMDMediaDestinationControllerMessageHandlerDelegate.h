/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDMediaDestinationControllerMessageHandlerDelegate
@required
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg2 destinationIdentifier:(id)arg3 updateOptions:(unsigned long long)arg4;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationUpdatedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveHomeAccessoryRemovedNotification:(id)arg2 destination:(id)arg3;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemAddedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemRemovedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveAccessoryChangedRoomNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(id)arg2 destinationControllerIdentifier:(id)arg3 destinationIdentifier:(id)arg4;

@end

