/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartPieLabelPlacement.h>

@interface TSCHChartPieBendedLineLabelPlacement : TSCHChartPieLabelPlacement
-(id)updateLabelTransformsToPreventOverlap;
-(id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id*)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id*)arg5 stroke:(id)arg6 outStroke:(id*)arg7 context:(CGContextRef)arg8 contextScale:(float)arg9 ;
-(void)preventOverlapsWithinWedges;
-(void)fixOverlapsOutsideWedges;
-(void)shiftLabelsVerticallyToCleanUpPlacement;
-(void)fixOverlapsWithWedgeLayoutInfos:(id)arg1 inVerticalHalfDisk:(unsigned long long)arg2 ;
-(id)wedgeLayoutInfosInVerticalHalfDiskWithWedgeLayoutInfos:(id)arg1 verticalHalfDisk:(unsigned long long)arg2 ;
-(id)arrayOfConflictingLabelsWithWedgeLayoutInfosOnOneSide:(id)arg1 ;
-(void)fixOverlapsOnOneVerticalSideWithConflictingLabelsArray:(id)arg1 ;
-(id)wedgeLayoutInfosInHorizontalHalfDiskWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(unsigned long long)arg2 ;
-(void)fixConflictsInOneQuadrantOfPieChartWithArray:(id)arg1 quadrantInHorizontalHalfDisk:(unsigned long long)arg2 ;
-(char)conflictBetweenWedgeLayoutInfo:(id)arg1 nextWedgeLayoutInfo:(id)arg2 ;
-(double)shiftAmountForWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(char)arg3 ;
-(void)shiftLabelsVerticallyInOneQuadrantWithWedgeLayoutInfos:(id)arg1 shiftAmount:(double)arg2 quadrantInHorizontalHalfDisk:(unsigned long long)arg3 ;
-(double)totalHeightOverlapWithArray:(id)arg1 ;
-(CGAffineTransform)transformToShiftWedgeLayoutInfoAwayFromAdjacentWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(char)arg3 totalHeightOverlap:(double)arg4 ;
-(void)shiftLabelsVerticallyToCleanUpPlacementWithCleanUpOption:(unsigned long long)arg1 ;
-(id)topLeftQuadrant;
-(void)shiftLabelsVerticallyInQuadrantIfNecessary:(id)arg1 withCleanUpOption:(unsigned long long)arg2 ;
-(id)bottomLeftQuadrant;
-(id)topRightQuadrant;
-(id)bottomRightQuadrant;
-(id)wedgeLayoutInfosThatNeedShiftingToCleanUpQuadrant:(id)arg1 cleanUpOption:(unsigned long long)arg2 ;
-(double)amountLabelsInQuadrantNeedToShift:(id)arg1 cleanUpOption:(unsigned long long)arg2 ;
-(double)amountWedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2 ;
-(double)amountWedgeLayoutInfoShouldShiftToPreventShortFirstHalf:(id)arg1 ;
-(double)amountWedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1 ;
-(char)wedgeLayoutInfoShouldShiftToPreventTooShortCalloutLineFirstHalf:(id)arg1 ;
-(CGPoint)calloutLineStartpointForWedgeLayoutInfo:(id)arg1 ;
-(CGPoint)calloutLineEndpointForWedgeLayoutInfo:(id)arg1 ;
-(char)wedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1 ;
-(CGPoint)calloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(CGPoint)arg2 endPoint:(CGPoint)arg3 ;
-(char)wedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2 ;
-(id)wedgeLayoutInfosInOneQuadrant:(id)arg1 verticalHalfDisk:(unsigned long long)arg2 horizontalHalfDisk:(unsigned long long)arg3 ;
-(CGPoint)defaultCalloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(CGPoint)arg2 endPoint:(CGPoint)arg3 ;
-(char)wedgeLayoutInfoShouldUsePerpendicularAngle:(id)arg1 defaultMidpoint:(CGPoint)arg2 ;
-(CGPoint)firstHalfOfBendedLineVectorNormalizedWithWedgeLayoutInfo:(id)arg1 shouldBeUpwards:(char)arg2 ;
-(char)innermostWedgeLayoutInfoWillUsePerpendicularAngle:(id)arg1 ;
-(id)innermostWedgeLayoutInfo:(id)arg1 ;
@end
