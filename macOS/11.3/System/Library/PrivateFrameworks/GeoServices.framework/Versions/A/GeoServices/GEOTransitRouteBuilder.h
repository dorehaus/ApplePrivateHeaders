/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORouteBuilder.h>

@interface GEOTransitRouteBuilder : GEORouteBuilder
+(id)outputForGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3 andCustodian:(id)arg4 ;
+(id)outputForSuggestedRoute:(id)arg1 withDecoderData:(id)arg2 andWaypoints:(id)arg3 andArrivalParameters:(id)arg4 andCustodian:(id)arg5 ;
+(id)optionsForRideSelections:(id)arg1 forSuggestionRoute:(id)arg2 ;
+(void)preprocessClusteredSuggestedRoute:(id)arg1 withSectionOptions:(id)arg2 andRideSelections:(id)arg3 andDecoderData:(id)arg4 ;
+(id)outputForSuggestedRoute:(id)arg1 withDecoderData:(id)arg2 andWaypoints:(id)arg3 andArrivalParameters:(id)arg4 andCustodian:(id)arg5 andRideSelections:(id)arg6 andSectionOptions:(id)arg7 ;
+(id)buildRouteSectionsForSuggestedRoute:(id)arg1 fromSteps:(id)arg2 andSegments:(id)arg3 andCoordinates:(id)arg4 andDecoderData:(id)arg5 ;
+(id)selectionsForSuggestedRoute:(id)arg1 ;
+(id)_buildStepInfosFromSteps:(id)arg1 withDecoderData:(id)arg2 andIsWalkingOnlyRoute:(char)arg3 andBuildPointData:(id)arg4 ;
+(id)_buildCoordinatesForData:(id)arg1 andStepInfos:(id)arg2 andCustodian:(id)arg3 withWaypoints:(id)arg4 andArrivalParameters:(id)arg5 andCreateLegs:(id)arg6 ;
+(id)_buildStepsForStepInfos:(id)arg1 andCustodian:(id)arg2 andDecoderData:(id)arg3 andSuggestedRoute:(id)arg4 andLegs:(id)arg5 andPointCount:(unsigned long long)arg6 andRideSelections:(id)arg7 andSectionOptions:(id)arg8 andCreateSegments:(id)arg9 andUpdateTripCount:(unsigned long long*)arg10 ;
+(double)_totalDistanceForLegs:(id)arg1 ;
+(id)_sectionOptionForTripIndex:(unsigned long long)arg1 andSectionOptions:(id)arg2 ;
+(id)_buildTransitStepInfoFromStep:(id)arg1 withPreviousStep:(id)arg2 andNextStep:(id)arg3 andDecoderData:(id)arg4 andPointData:(id)arg5 ;
+(id)_buildExpandedWalkingStepInfosFromStep:(id)arg1 andDecoderData:(id)arg2 andPointData:(id)arg3 ;
+(id)_buildArrivalStepInfoFromStep:(id)arg1 withPointCount:(unsigned long long)arg2 ;
+(NSRange)_appendPointData:(id)arg1 toPointData:(id)arg2 withContinuity:(char)arg3 ;
+(unsigned long long)_stepCountForSegmentWithStartingStepIndex:(unsigned long long)arg1 andStepInfos:(id)arg2 ;
+(id)_stepForStepInfoAtIndex:(unsigned long long)arg1 andStepInfos:(id)arg2 andSteps:(id)arg3 andCustodian:(id)arg4 withDecoderData:(id)arg5 andSuggestedRoute:(id)arg6 andPointCount:(unsigned long long)arg7 ;
+(id)_segmentForSteps:(id)arg1 withRange:(NSRange)arg2 andCustodian:(id)arg3 andDecoderData:(id)arg4 andSuggestedRoute:(id)arg5 andRideSelections:(id)arg6 andSectionOptions:(id)arg7 andUpdateTripCount:(unsigned long long*)arg8 ;
+(NSRange)_validPointRangeForStepInfoIndex:(unsigned long long)arg1 andStepInfos:(id)arg2 withPointCount:(unsigned long long)arg3 ;
+(id)_walkingStepForStepInfo:(id)arg1 withValidPointRange:(NSRange)arg2 andStepCount:(unsigned long long)arg3 andCustodian:(id)arg4 andDecoderData:(id)arg5 andSuggestedRoute:(id)arg6 ;
+(char)_shouldBreakPointSectionAtStep:(id)arg1 previousStep:(id)arg2 ;
+(double)_buildPointSectionsInCollection:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 transitLineColor:(id)arg4 startDistance:(double)arg5 coordinates:(id)arg6 fromSteps:(id)arg7 andSegments:(id)arg8 andDecoderData:(id)arg9 ;
+(id)_sectionForSteps:(id)arg1 withIndex:(unsigned long long)arg2 andSegment:(id)arg3 withIndex:(unsigned long long)arg4 andCoordinates:(id)arg5 andPointRange:(NSRange)arg6 andBounds:(SCD_Struct_GE186)arg7 andTransitLineColor:(id)arg8 andStartDistance:(double)arg9 andDecoderData:(id)arg10 ;
+(id)_buildPointDataForGeometry:(id)arg1 andCreatePointStarts:(id)arg2 ;
+(id)_buildStepsForGeometry:(id)arg1 andPointStarts:(id)arg2 andStopCount:(unsigned long long)arg3 andLine:(id)arg4 andCustodian:(id)arg5 ;
+(id)_buildSegmentsForGeometry:(id)arg1 andStepCount:(unsigned long long)arg2 andPointCount:(unsigned long long)arg3 andCustodian:(id)arg4 ;
+(id)_buildPointSectionsFromSteps:(id)arg1 andSegments:(id)arg2 coordinates:(id)arg3 andTransitLineColor:(id)arg4 ;
+(id)_buildLegsFromSteps:(id)arg1 andCoordinates:(id)arg2 andCustodian:(id)arg3 ;
+(double)_buildPointSectionsInCollection:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 transitLineColor:(id)arg4 startDistance:(double)arg5 andCoordinates:(id)arg6 fromSteps:(id)arg7 andSegments:(id)arg8 ;
@end

