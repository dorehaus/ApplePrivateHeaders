/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TURoute.h>

@class NSArray;

@interface TUMutableRoute : TURoute

@property (assign,nonatomic) long long deviceType; 
@property (assign,getter=isCurrentlyPicked,nonatomic) char currentlyPicked; 
@property (assign,getter=isDefaultRoute,nonatomic) char defaultRoute; 
@property (assign,getter=isReceiver,nonatomic) char receiver; 
@property (assign,getter=isSpeaker,nonatomic) char speaker; 
@property (assign,getter=isWiredHeadphones,nonatomic) char wiredHeadphones; 
@property (assign,getter=isWiredHeadset,nonatomic) char wiredHeadset; 
@property (assign,getter=isWirelessHeadset,nonatomic) char wirelessHeadset; 
@property (assign,getter=isAirTunes,nonatomic) char airTunes; 
@property (assign,getter=isCarAudio,nonatomic) char carAudio; 
@property (assign,getter=isGuest,nonatomic) char guest; 
@property (assign,getter=isBluetooth,nonatomic) char bluetooth; 
@property (assign,getter=isBluetoothLE,nonatomic) char bluetoothLE; 
@property (assign,nonatomic) long long bluetoothEndpointType; 
@property (assign,getter=isPreferred,nonatomic) char preferred; 
@property (assign,getter=isPreferredAndActive,nonatomic) char preferredAndActive; 
@property (assign,nonatomic) char supportsPreferredAndActive; 
@property (nonatomic,copy) NSArray * identifiersOfOtherConnectedDevices; 
@property (assign,nonatomic) char supportsRelay; 
+(char)supportsSecureCoding;
@end
