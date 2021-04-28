/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColor.h>

@interface NSDeviceCMYKColor : NSColor {

	double cyanComponent;
	double magentaComponent;
	double yellowComponent;
	double blackComponent;
	double alphaComponent;
	CGColorRef _cachedCGColor;

}
+(id)newWithCoder:(id)arg1 zone:(NSZone*)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)set;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(CGColorRef)CGColor;
-(void)setStroke;
-(double)cyanComponent;
-(double)magentaComponent;
-(double)yellowComponent;
-(double)blackComponent;
-(double)alphaComponent;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)colorUsingColorSpace:(id)arg1 ;
-(id)colorUsingType:(long long)arg1 ;
-(long long)numberOfComponents;
-(void)getComponents:(double*)arg1 ;
-(id)colorSpace;
-(id)colorSpaceName;
-(void)getCyan:(double*)arg1 magenta:(double*)arg2 yellow:(double*)arg3 black:(double*)arg4 alpha:(double*)arg5 ;
-(void)setFill;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(id)initWithCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5 ;
-(id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2 ;
-(char)isUniform;
-(void)drawSwatchInRect:(CGRect)arg1 ;
@end
