/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, CALayer;


@protocol CCVegaMarkItemInterface
@property (readonly) double cornerRadius; 
@property (readonly) NSString * shape; 
@property (readonly) NSString * orient; 
@property (readonly) double size; 
@property (readonly) NSString * baseline; 
@property (readonly) double radius; 
@property (readonly) double theta; 
@property (readonly) NSString * fontStyle; 
@property (readonly) double fontSize; 
@property (readonly) NSString * fontWeight; 
@property (readonly) NSString * font; 
@property (readonly) NSString * align; 
@property (readonly) double x; 
@property (readonly) double x2; 
@property (readonly) double dx; 
@property (readonly) double width; 
@property (readonly) double y; 
@property (readonly) double y2; 
@property (readonly) double dy; 
@property (readonly) double angle; 
@property (readonly) double height; 
@property (readonly) double opacity; 
@property (readonly) NSObject*<CCVegaColorOrGradientInterface> fill; 
@property (readonly) double fillOpacity; 
@property (readonly) NSObject*<CCVegaColorOrGradientInterface> stroke; 
@property (readonly) double strokeOpacity; 
@property (readonly) double strokeWidth; 
@property (readonly) NSString * strokeCap; 
@property (readonly) NSArray * strokeDash; 
@property (readonly) NSString * strokeJoin; 
@property (readonly) NSString * interpolate; 
@property (readonly) double strokeMiterLimit; 
@property (readonly) NSString * path; 
@property (readonly) double zindex; 
@property (readonly) BOOL clip; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,retain) CALayer * caLayer; 
@property (assign,nonatomic) BOOL isDirty; 
@required
-(double)size;
-(BOOL)isEqual:(id)arg1;
-(unsigned long long)itemCount;
-(id)itemAtIndex:(unsigned long long)arg1;
-(NSString *)path;
-(double)width;
-(double)height;
-(CGRect*)bounds;
-(NSString *)font;
-(double)cornerRadius;
-(NSObject*<CCVegaColorOrGradientInterface>)stroke;
-(NSObject*<CCVegaColorOrGradientInterface>)fill;
-(double)strokeWidth;
-(double)opacity;
-(double)fontSize;
-(BOOL)isDirty;
-(NSString *)shape;
-(double)x;
-(double)y;
-(double)radius;
-(double)angle;
-(double)theta;
-(NSString *)baseline;
-(BOOL)clip;
-(NSString *)fontStyle;
-(NSString *)fontWeight;
-(NSString *)align;
-(NSString *)orient;
-(void)setIsDirty:(BOOL)arg1;
-(double)dx;
-(double)dy;
-(double)strokeMiterLimit;
-(double)getDouble:(id)arg1 defaultValue:(double)arg2;
-(CALayer *)caLayer;
-(CGPathRef)newPathByCallingShapeFunction;
-(id)getString:(id)arg1 defaultValue:(id)arg2;
-(id)getObject:(id)arg1 defaultValue:(id)arg2;
-(BOOL)getBoolean:(id)arg1 defaultValue:(BOOL)arg2;
-(BOOL)defined;
-(id)getText;
-(double)x2;
-(double)y2;
-(double)fillOpacity;
-(double)strokeOpacity;
-(NSString *)strokeCap;
-(NSArray *)strokeDash;
-(NSString *)strokeJoin;
-(NSString *)interpolate;
-(double)zindex;
-(void)setCaLayer:(id)arg1;

@end
