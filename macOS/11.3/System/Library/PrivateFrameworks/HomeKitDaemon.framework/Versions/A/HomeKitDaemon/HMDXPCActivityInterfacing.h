/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDXPCActivityInterfacing <NSObject>
@required
-(long long)stateForXPCActivity:(id)arg1;
-(void)registerXPCActivityWithActivityIdentifier:(id)arg1 criteria:(id)arg2 activityBlock:(/*^block*/id)arg3;
-(id)criteriaForXPCActivity:(id)arg1;
-(void)setCriteria:(id)arg1 forXPCActivity:(id)arg2;
-(char)setState:(long long)arg1 forXPCActivity:(id)arg2;
-(void)unregisterXPCActivityWithActivityIdentifier:(id)arg1;

@end

