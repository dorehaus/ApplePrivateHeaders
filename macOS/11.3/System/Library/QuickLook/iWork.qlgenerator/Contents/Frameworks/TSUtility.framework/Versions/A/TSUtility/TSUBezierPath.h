/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface TSUBezierPath : NSObject <NSCopying> {

	long long sfr_elementCount;
	long long sfr_elementMax;
	PATHSEGMENT* sfr_head;
	double* sfr_elementLength;
	double sfr_totalLength;
	long long sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	double sfr_lineWidth;
	CGRect sfr_bounds;
	CGRect sfr_controlPointBounds;
	double sfr_miterLimit;
	double sfr_flatness;
	double* sfr_dashedLinePattern;
	unsigned long long sfr_dashedLineCount;
	double sfr_dashedLinePhase;
	CGPathRef sfr_path;
	long long sfr_extraSegmentCount;
	long long sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}

@property (nonatomic,readonly) char isCompound; 
@property (nonatomic,readonly) char isOpen; 
@property (nonatomic,readonly) char isLineSegment; 
@property (nonatomic,readonly) char isEffectivelyClosed; 
@property (nonatomic,readonly) char containsElementsOtherThanMoveAndClose; 
@property (nonatomic,readonly) unsigned long long totalSubpathCountIncludingEffectivelyEmptySubpaths; 
@property (nonatomic,readonly) NSArray * visuallyDistinctSubregions; 
@property (nonatomic,readonly) char hasAtLeastTwoVisuallyDistinctSubregions; 
@property (nonatomic,readonly) double flattenedArea; 
@property (nonatomic,readonly) NSString * inferredAccessibilityDescription; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) unsigned long long lineCapStyle; 
@property (assign,nonatomic) unsigned long long lineJoinStyle; 
@property (assign,nonatomic) long long windingRule; 
@property (assign,nonatomic) double miterLimit; 
@property (assign,nonatomic) double flatness; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) char containsClosePathElement; 
+(id)uniteBezierPaths:(id)arg1 ;
+(id)exteriorOfBezierPath:(id)arg1 ;
+(id)outsideEdgeOfBezierPath:(id)arg1 ;
+(id)tracedPathForImage:(CGImageRef)arg1 alphaThreshold:(double)arg2 pointSpacing:(double)arg3 ;
+(id)subtractBezierPaths:(id)arg1 ;
+(id)intersectBezierPaths:(id)arg1 ;
+(id)bezierPathWithConvexHullOfPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(Path*)p_bezierToPath:(id)arg1 ;
+(id)p_pathToBezier:(Path*)arg1 ;
+(id)excludeBezierPaths:(id)arg1 ;
+(id)appendBezierPaths:(id)arg1 ;
+(id)smoothBezierPath:(id)arg1 withThreshold:(double)arg2 ;
+(CGRect)p_pathToBounds:(Path*)arg1 ;
+(SCD_Struct_TS48)lineEndPositioningOnPath:(id)arg1 atHead:(char)arg2 headPoint:(CGPoint)arg3 tailPoint:(CGPoint)arg4 headLineEnd:(id)arg5 tailLineEnd:(id)arg6 stroke:(id)arg7 ;
+(id)createClippedPath:(id)arg1 headPositioning:(SCD_Struct_TS48)arg2 tailPositioning:(SCD_Struct_TS48)arg3 stroke:(id)arg4 ;
+(id)p_normalizeSubpaths:(id)arg1 ;
+(id)p_mergeIntersectingSubpaths:(id)arg1 stopAfterFoundTwo:(char)arg2 ;
+(id)p_usingLivarotStrokeBezierPath:(id)arg1 withThreshold:(double)arg2 ;
+(id)unitePolygonalBezierPaths:(id)arg1 ;
+(id)subtractPolygonalBezierPaths:(id)arg1 ;
+(CGPoint)p_findPointWithGreatestSlopeFromStartPoint:(CGPoint)arg1 toPointA:(CGPoint)arg2 orPointB:(CGPoint)arg3 ;
+(SCD_Struct_TS48)makeDefaultPositioning;
+(id)p_uniteBezierPaths:(id)arg1 usingGPC:(char)arg2 ;
+(id)p_usingGPCBooleanBezierPaths:(id)arg1 operation:(int)arg2 ;
+(id)p_usingLivarotBooleanBezierPaths:(id)arg1 operation:(int)arg2 ;
+(id)p_intersectBezierPaths:(id)arg1 usingGPC:(char)arg2 ;
+(id)p_subtractBezierPaths:(id)arg1 usingGPC:(char)arg2 ;
+(char)p_allPathsAreFlat:(id)arg1 ;
+(void)initialize;
+(void)setLineWidth:(double)arg1 ;
+(double)lineWidth;
+(id)bezierPath;
+(long long)windingRule;
+(void)setWindingRule:(long long)arg1 ;
+(unsigned long long)lineCapStyle;
+(void)setLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned long long)arg1 ;
+(double)miterLimit;
+(void)setMiterLimit:(double)arg1 ;
+(double)flatness;
+(void)setFlatness:(double)arg1 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(void)fillRect:(CGRect)arg1 ;
+(void)strokeRect:(CGRect)arg1 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(double)arg1 ;
+(double)defaultMiterLimit;
+(void)setDefaultFlatness:(double)arg1 ;
+(double)defaultFlatness;
+(void)setDefaultWindingRule:(long long)arg1 ;
+(long long)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(double)arg1 ;
+(double)defaultLineWidth;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 upperRightRadius:(double)arg2 lowerRightRadius:(double)arg3 lowerLeftRadius:(double)arg4 upperLeftRadius:(double)arg5 useLegacyCorners:(char)arg6 keepNoOpElements:(char)arg7 ;
+(id)bezierPathWithLegacyRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithDefaultsForErrorCases;
+(id)bezierPathWithContinuousCornerRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(double)minimumLengthForSideToHaveFullContinuityWithCornerRadius1:(double)arg1 cornerRadius2:(double)arg2 ;
-(char)isOpen;
-(CGPoint)pointAt:(double)arg1 ;
-(id)intersectBezierPath:(id)arg1 ;
-(id)subtractBezierPath:(id)arg1 ;
-(id)uniteWithBezierPath:(id)arg1 ;
-(id)initWithArchive:(const Path*)arg1 ;
-(void)saveToArchive:(Path*)arg1 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGPoint)arg2 inElementRange:(NSRange)arg3 into:(id)arg4 ;
-(void)getStartPoint:(CGPoint*)arg1 andEndPoint:(CGPoint*)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(char)arg3 reversed:(char)arg4 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(char)arg6 ;
-(CGPoint)rawGradientAt:(double)arg1 fromElement:(long long)arg2 ;
-(long long)elementPercentage:(double*)arg1 forOverallPercentage:(double)arg2 ;
-(CGPoint)gradientAt:(double)arg1 fromElement:(long long)arg2 ;
-(CGPoint)pointAt:(double)arg1 fromElement:(long long)arg2 ;
-(double)elementPercentageFromElement:(long long)arg1 forOverallPercentage:(double)arg2 ;
-(double)curvatureAt:(double)arg1 fromElement:(long long)arg2 ;
-(CGPoint)myGradientAt:(double)arg1 fromElement:(long long)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 ;
-(void)addIntersectionsWithLine:(CGPoint)arg1 to:(id)arg2 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3 ;
-(id)copyFromSegment:(int)arg1 t:(double)arg2 toSegment:(int)arg3 t:(double)arg4 ;
-(CGPoint)nearestPointOnPathToLine:(CGPoint)arg1 ;
-(CGPoint)nearestAngleOnPathToLine:(CGPoint)arg1 ;
-(CGPoint)gradientAt:(double)arg1 ;
-(CGPoint)myGradientAt:(double)arg1 ;
-(double)curvatureAt:(double)arg1 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGPoint)arg2 into:(id)arg3 ;
-(id)chisel;
-(char)intersectsRect:(CGRect)arg1 hasFill:(char)arg2 ;
-(CGRect)boundsIncludingTSDStroke:(id)arg1 ;
-(id)pathSplitAtSubpathBoundariesWithSoftElementLimit:(unsigned long long)arg1 hardElementLimit:(unsigned long long)arg2 ;
-(CGRect)boundsIncludingStroke;
-(long long)elementPercentage:(double*)arg1 forOverallPercentage:(double)arg2 startingElementIndex:(long long)arg3 lengthToStartingElement:(double)arg4 ;
-(char)isLineSegment;
-(id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2 ;
-(void)takeAttributesFromStroke:(id)arg1 ;
-(char)isEffectivelyClosed;
-(id)aliasedPathInContext:(CGContextRef)arg1 effectiveStrokeWidth:(float)arg2 ;
-(double)yValueFromXValue:(double)arg1 elementIndex:(long long*)arg2 parametricValue:(double*)arg3 ;
-(CGRect)boundsIncludingStrokeWidth:(double)arg1 joinStyle:(unsigned long long)arg2 capStyle:(unsigned long long)arg3 miterLimit:(double)arg4 needsToExtendJoins:(char)arg5 ;
-(id)p_copyWithPointsInRange:(NSRange)arg1 countingSubpaths:(unsigned long long*)arg2 ;
-(id)p_elementCountForSubpaths;
-(id)copyWithPointsInRange:(NSRange)arg1 ;
-(void)addPathToContext:(CGContextRef)arg1 ;
-(id)p_aliasedPathInContext:(CGContextRef)arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3 ;
-(double)yValueFromXValue:(double)arg1 ;
-(void)alignBoundsToOrigin;
-(char)isCompound;
-(CGPoint)pointAlongPathAtPercentage:(double)arg1 ;
-(void)clearStroke:(CGContextRef)arg1 ;
-(id)pathByWobblingByUpTo:(double)arg1 subdivisions:(unsigned long long)arg2 ;
-(CGPoint)roundPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 strokeWidth:(int)arg3 ;
-(id)arrayOfSubpathsWithEffectivelyEmptySubpathsRemoved:(char)arg1 ;
-(id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 attemptingUsingLivarotFirstWithThresholds:(id)arg3 ;
-(id)strokedCopyAttemptingUsingLivarotFirst;
-(CGPoint)transformedTotalCoordinate:(CGPoint)arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 getElement:(long long*)arg4 getPercentage:(double*)arg5 ;
-(NSString *)inferredAccessibilityDescription;
-(char)containsElementsOtherThanMoveAndClose;
-(unsigned long long)totalSubpathCountIncludingEffectivelyEmptySubpaths;
-(id)p_pathBySplittingAtPointGuaranteedToBeOnPath:(CGPoint)arg1 controlPointDistanceEqual:(char)arg2 elementIndex:(long long)arg3 parametricValue:(double)arg4 ;
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 findClosestMatch:(char)arg5 ;
-(void)appendPointsInRange:(NSRange)arg1 fromBezierPath:(id)arg2 ;
-(CGPoint)pointAlongPathAtPercentage:(double)arg1 withFlattenedPath:(id)arg2 andLength:(double*)arg3 atStartIndex:(unsigned long long*)arg4 ;
-(id)p_bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 attemptWithLivarotFirst:(char)arg3 livarotOverrideThresholds:(id)arg4 ;
-(id)p_strokedCopyAttemptingUsingLivarotFirst:(char)arg1 livarotOverrideThresholds:(id)arg2 ;
-(id)p_strokedPathByUsingCG;
-(id)pathBySplittingAtPointOnPath:(CGPoint)arg1 controlPointDistanceEqual:(char)arg2 ;
-(id)pathByCreatingHoleInPathAtPoint:(CGPoint)arg1 withDiameter:(/*^block*/id)arg2 andThreshold:(double)arg3 updatingPatternOffsetsBySubpath:(id)arg4 ;
-(void)iterateOverPathWithPointDistancePerIteration:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)hasAtLeastTwoVisuallyDistinctSubregions;
-(NSArray *)visuallyDistinctSubregions;
-(id)pathByNormalizingClosedPathToRemoveSelfIntersections;
-(id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 ;
-(id)strokedCopy;
-(id)uniteWithPolygonalBezierPath:(id)arg1 ;
-(id)subtractPolygonalBezierPath:(id)arg1 ;
-(double)flattenedArea;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(double)length;
-(char)isEmpty;
-(const char*)cString;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(id)initWithCString:(const char*)arg1 ;
-(CGRect)bounds;
-(long long)elementCount;
-(long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint*)arg2 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(long long)windingRule;
-(void)setWindingRule:(long long)arg1 ;
-(unsigned long long)lineCapStyle;
-(void)setLineCapStyle:(unsigned long long)arg1 ;
-(unsigned long long)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned long long)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(CGPoint)currentPoint;
-(void)_doPath;
-(void)addClip;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(CGRect)controlPointBounds;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(char)arg5 ;
-(void)removeAllPoints;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(CGPathRef)CGPath;
-(void)stroke;
-(void)fill;
-(id)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(id)bezierPathByReversingPath;
-(long long)elementAtIndex:(long long)arg1 ;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(long long)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2 ;
-(char)isRectangular;
-(void)copyPathAttributesTo:(id)arg1 ;
-(char)_isValid:(double)arg1 ;
-(CGPoint)_checkPointForValidity:(CGPoint)arg1 ;
-(void)flattenIntoPath:(id)arg1 flatness:(double)arg2 ;
-(id)bezierPathByFlatteningPathWithFlatness:(double)arg1 ;
-(char)isFlat;
-(id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1 ;
-(id)bezierPathByRemovingRedundantElements;
-(long long)elementAtIndex:(long long)arg1 allPoints:(CGPoint*)arg2 ;
-(double)calculateLengthOfElement:(long long)arg1 ;
-(void)calculateLengths;
-(void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(char)arg2 ;
-(void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(char)arg2 ;
-(id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1 ;
-(char)isTriangular;
-(char)isDiamond;
-(char)isCircular;
-(char)isClockwise;
-(double)lengthOfElement:(long long)arg1 ;
-(double)lengthToElement:(long long)arg1 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(char)arg5 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(char)arg5 ;
-(char)containsClosePathElement;
-(void)curveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)convertCloseElementsToLineElements;
@end

