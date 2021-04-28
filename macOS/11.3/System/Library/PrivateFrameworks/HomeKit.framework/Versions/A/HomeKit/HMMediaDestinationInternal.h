/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, NSUUID;


@protocol HMMediaDestinationInternal <HMMediaDestination>
@property (copy,readonly) NSArray * audioDestinationMediaProfiles; 
@property (copy,readonly) NSString * audioDestinationParentIdentifier; 
@property (copy,readonly) NSUUID * audioDestinationGroupIdentifier; 
@required
-(void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(NSArray *)audioDestinationMediaProfiles;
-(NSString *)audioDestinationParentIdentifier;
-(NSUUID *)audioDestinationGroupIdentifier;

@end

