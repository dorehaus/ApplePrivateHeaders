/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSColor;

@interface NSTextBlock : NSObject <NSSecureCoding, NSCopying> {

	void* _propVals;
	unsigned long long _propMask;
	unsigned long long _typeMask;
	id _primParamVal;
	id _otherParamVals;
	void* _blockPrimary;
	void* _blockSecondary;

}

@property (readonly) double contentWidth; 
@property (readonly) unsigned long long contentWidthValueType; 
@property (assign) unsigned long long verticalAlignment; 
@property (copy) NSColor * backgroundColor; 
+(void)initialize;
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)backgroundColor;
-(void)setBorderColor:(id)arg1 ;
-(unsigned long long)verticalAlignment;
-(id)borderColorForEdge:(unsigned long long)arg1 ;
-(unsigned long long)widthValueTypeForLayer:(long long)arg1 edge:(unsigned long long)arg2 ;
-(double)widthForLayer:(long long)arg1 edge:(unsigned long long)arg2 ;
-(void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 ;
-(void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 edge:(unsigned long long)arg4 ;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(void)setValue:(double)arg1 type:(unsigned long long)arg2 forDimension:(unsigned long long)arg3 ;
-(double)contentWidth;
-(unsigned long long)contentWidthValueType;
-(void)setContentWidth:(double)arg1 type:(unsigned long long)arg2 ;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(unsigned long long)valueTypeForDimension:(unsigned long long)arg1 ;
-(double)valueForDimension:(unsigned long long)arg1 ;
-(void)setBorderColor:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_destroyFloatStorage;
-(void)_createFloatStorage;
-(void)_setValue:(double)arg1 type:(unsigned long long)arg2 forParameter:(unsigned long long)arg3 ;
-(double)_valueForParameter:(unsigned long long)arg1 ;
-(unsigned long long)_valueTypeForParameter:(unsigned long long)arg1 ;
-(CGRect)rectForLayoutAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(CGRect)boundsRectForContentRect:(CGRect)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(void)drawBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 characterRange:(NSRange)arg3 layoutManager:(id)arg4 ;
-(id)_attributeDescription;
@end

