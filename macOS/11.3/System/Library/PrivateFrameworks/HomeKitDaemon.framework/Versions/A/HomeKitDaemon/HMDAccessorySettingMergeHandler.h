/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HMDAccessorySettingMergeHandler : NSObject
+(id)_mergeValidValueConstraintsFirst:(id)arg1 second:(id)arg2 shouldAddMissing:(char)arg3 ;
+(id)_mergeRangeConstraintsFirst:(id)arg1 second:(id)arg2 shouldAddMissing:(char)arg3 ;
+(id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4 ;
+(char)_extractMinMaxStep:(id)arg1 minConstraint:(id*)arg2 maxConstraint:(id*)arg3 stepConstraint:(id*)arg4 first:(id)arg5 ;
+(char)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4 ;
+(char)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3 shouldAddMissing:(char)arg4 ;
@end

