/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPFirmwareUpdateSessionPrivateProtocol <SPFirmwareUpdateSessionProtocol>
@required
-(void)initiateFirmwareUpdateForAllEligibleBeaconsWithCompletion:(/*^block*/id)arg1;
-(void)beaconsInFirmwareUpdateState:(long long)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3;
-(void)firmwareUpdateStateForBeaconUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end

