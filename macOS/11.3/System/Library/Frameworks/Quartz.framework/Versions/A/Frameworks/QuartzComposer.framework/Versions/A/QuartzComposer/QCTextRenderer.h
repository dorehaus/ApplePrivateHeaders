/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSString;

@interface QCTextRenderer : NSObject {

	NSString* _string;
	int _alignmentH;
	int _alignmentV;
	NSString* _fontName;
	double _fontSize;
	double _fontKerning;
	double _offset;
	CGRect _frame;
	void* _framesetterRef;
	void* _frameRef;
	CGRect _bounds;

}
+(void)initialize;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)string;
-(void)setString:(id)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(id)fontName;
-(void)setLeadingOffset:(double)arg1 ;
-(double)leadingOffset;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setHorizontalAlignment:(int)arg1 ;
-(int)horizontalAlignment;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)typographicBounds;
-(double)fontSize;
-(void)setFontName:(id)arg1 size:(double)arg2 ;
-(void)_flushCache:(char)arg1 ;
-(void)_updateCache;
-(void)setKerningShift:(double)arg1 ;
-(double)kerningShift;
-(unsigned long long)visibleLineCount;
-(NSRange)visibleStringRange;
-(void)drawInContext:(CGContextRef)arg1 withColorRed:(double)arg2 green:(double)arg3 blue:(double)arg4 alpha:(double)arg5 ;
@end
