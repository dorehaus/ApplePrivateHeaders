/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVPersonPromoterDelegate <NSObject>
@required
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(char)arg3 updateBlock:(/*^block*/id)arg4;

@end

