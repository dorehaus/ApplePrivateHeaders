/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DMFConfigurationSourceClientInterface <NSObject>
@required
-(void)probe:(/*^block*/id)arg1;
-(void)configurationStatusDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationEventsDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationEngineRequestedAsset:(id)arg1 completion:(/*^block*/id)arg2;

@end

