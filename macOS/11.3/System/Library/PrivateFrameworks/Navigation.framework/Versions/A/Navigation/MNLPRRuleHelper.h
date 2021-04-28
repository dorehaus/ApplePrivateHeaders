/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNLPRRuleHelper : NSObject
-(id)workQueue;
-(void)fetchRulesForWaypoints:(id)arg1 forceUpdateManifest:(char)arg2 forceUpdateRules:(char)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_findResourceNamesForRegions:(id)arg1 forceUpdate:(char)arg2 asyncCompletion:(/*^block*/id)arg3 ;
-(void)_loadRules:(id)arg1 asyncCompletion:(/*^block*/id)arg2 ;
-(void)prefetchRulesForWaypoints:(id)arg1 ;
@end
