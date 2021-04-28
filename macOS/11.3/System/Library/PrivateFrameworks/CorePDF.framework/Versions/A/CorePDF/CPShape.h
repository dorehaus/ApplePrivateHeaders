/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPShape : CPGraphicObject <CPDisposable> {

	long long mcid;
	unsigned pdfObjectID;
	CGPathRef path;
	char isUprightRectangle;
	int windingRule;
	double lineWidth;
	double miterLimit;
	int lineCap;
	int lineJoin;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CGPDFObjectRef fillObject;
	CGPDFObjectRef strokeObject;
	CGAffineTransform paintTransform;
	char boundsComputed;
	char renderedBoundsComputed;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)string;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(id)attributes;
-(CGRect)bounds;
-(char)isVisible;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)dispose;
-(int)windingRule;
-(void)setWindingRule:(int)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(CGColorRef)fillColor;
-(CGColorRef)strokeColor;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(int)lineJoin;
-(int)lineCap;
-(char)hasFill;
-(char)hasStroke;
-(id)initWithPDFShape:(CPPDFShape*)arg1 ;
-(void)addShape:(id)arg1 ;
-(long long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(unsigned)pathElementCount;
-(void)recomputeRenderedBounds;
-(void)recomputeBounds;
-(char)isUprightRectangle;
-(char)hasSamePathAs:(id)arg1 ;
-(char)isStrokeFor:(id)arg1 ;
-(CGPDFObjectRef)fillObject;
-(CGAffineTransform)paintTransform;
-(CGPDFObjectRef)strokeObject;
-(char)canCombineWith:(id)arg1 ;
-(void)setFillObject:(CGPDFObjectRef)arg1 ;
-(void)setStrokeObject:(CGPDFObjectRef)arg1 ;
-(void)setPaintTransform:(CGAffineTransform)arg1 ;
-(long long)mcid;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)arg1 ;
-(CGRect)innerBounds;
-(void)makeLineFromVertex:(CGPoint)arg1 toVertex:(CGPoint)arg2 ;
@end

