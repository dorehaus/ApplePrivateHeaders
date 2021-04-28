/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface OITSUBezierPath : NSObject <NSCopying, NSCoding> {

	long long sfr_elementCount;
	long long sfr_elementMax;
	PATHSEGMENT* sfr_head;
	double* sfr_elementLength;
	double sfr_totalLength;
	long long sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	double sfr_lineWidth;
	CGRect sfr_controlPointBounds;
	double sfr_miterLimit;
	double sfr_flatness;
	double* sfr_dashedLinePattern;
	unsigned long long sfr_dashedLineCount;
	double sfr_dashedLinePhase;
	void* sfr_path;
	long long sfr_extraSegmentCount;
	long long sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}
+(void)initialize;
+(void)setLineWidth:(double)arg1 ;
+(double)lineWidth;
+(id)bezierPath;
+(unsigned long long)windingRule;
+(void)setWindingRule:(unsigned long long)arg1 ;
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
+(void)setDefaultWindingRule:(unsigned long long)arg1 ;
+(unsigned long long)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(double)arg1 ;
+(double)defaultLineWidth;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(double)length;
-(char)isEmpty;
-(const char*)cString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
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
-(unsigned long long)windingRule;
-(void)setWindingRule:(unsigned long long)arg1 ;
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
-(void)attachBezierPath:(id)arg1 ;
@end
