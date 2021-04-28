/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGPeopleTitleUtility : NSObject
+(id)beautifiedLocationStringWithPersonNode:(id)arg1 peopleAddressEdge:(id)arg2 titleComponent:(id)arg3 insertLineBreak:(char)arg4 allowFamilyHome:(char)arg5 ;
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(char)arg2 insertLineBreaks:(char)arg3 ;
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(char)arg2 allowUnnamed:(char)arg3 allowedGroupsFormat:(unsigned long long)arg4 insertLineBreaks:(char)arg5 ;
+(id)ageStringForPersonNode:(id)arg1 date:(id)arg2 ;
+(id)ageStringForPersonNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2 ;
+(id)peopleGroupNameForPersonNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 ;
+(id)nameFromPersonNode:(id)arg1 ;
+(id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg1 titleComponent:(id)arg2 containsMe:(char)arg3 ;
@end

