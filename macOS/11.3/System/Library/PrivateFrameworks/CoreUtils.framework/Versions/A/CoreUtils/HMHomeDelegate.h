/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMHomeDelegate <NSObject>
@optional
-(void)homeDidUpdateName:(id)arg1;
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
-(void)home:(id)arg1 didAddAccessory:(id)arg2;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2;
-(void)home:(id)arg1 didAddUser:(id)arg2;
-(void)home:(id)arg1 didRemoveUser:(id)arg2;
-(void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
-(void)home:(id)arg1 didAddRoom:(id)arg2;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2;
-(void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
-(void)home:(id)arg1 didAddZone:(id)arg2;
-(void)home:(id)arg1 didRemoveZone:(id)arg2;
-(void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
-(void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
-(void)home:(id)arg1 didAddServiceGroup:(id)arg2;
-(void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
-(void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
-(void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
-(void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
-(void)home:(id)arg1 didAddActionSet:(id)arg2;
-(void)home:(id)arg1 didRemoveActionSet:(id)arg2;
-(void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
-(void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
-(void)home:(id)arg1 didAddTrigger:(id)arg2;
-(void)home:(id)arg1 didRemoveTrigger:(id)arg2;
-(void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
-(void)home:(id)arg1 didUpdateTrigger:(id)arg2;
-(void)home:(id)arg1 didUnblockAccessory:(id)arg2;
-(void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
-(void)home:(id)arg1 didUpdateHomeHubState:(unsigned long long)arg2;
-(void)homeDidUpdateSupportedFeatures:(id)arg1;

@end

