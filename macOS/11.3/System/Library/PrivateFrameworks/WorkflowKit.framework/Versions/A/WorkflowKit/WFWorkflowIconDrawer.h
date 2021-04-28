/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class WFWorkflowIconDrawerContext, WFColor, NSData;

@interface WFWorkflowIconDrawer : NSObject {

	char _drawBackground;
	char _useCustomImage;
	char _rounded;
	char _dark;
	char _highContrast;
	char _outline;
	unsigned short _glyphCharacter;
	WFWorkflowIconDrawerContext* _drawerContext;
	WFColor* _backgroundColor;
	NSData* _customImageData;
	WFColor* _glyphColor;
	double _cornerRadius;
	CGSize _glyphSize;

}

@property (nonatomic,readonly) WFWorkflowIconDrawerContext * drawerContext;              //@synthesize drawerContext=_drawerContext - In the implementation block
@property (assign,nonatomic) unsigned short glyphCharacter;                              //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,retain) WFColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSData * customImageData;                                     //@synthesize customImageData=_customImageData - In the implementation block
@property (nonatomic,retain) WFColor * glyphColor;                                       //@synthesize glyphColor=_glyphColor - In the implementation block
@property (assign,nonatomic) CGSize glyphSize;                                           //@synthesize glyphSize=_glyphSize - In the implementation block
@property (assign,nonatomic) char drawBackground;                                        //@synthesize drawBackground=_drawBackground - In the implementation block
@property (assign,nonatomic) char useCustomImage;                                        //@synthesize useCustomImage=_useCustomImage - In the implementation block
@property (assign,nonatomic) char rounded;                                               //@synthesize rounded=_rounded - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) char dark;                                                  //@synthesize dark=_dark - In the implementation block
@property (assign,nonatomic) char highContrast;                                          //@synthesize highContrast=_highContrast - In the implementation block
@property (assign,nonatomic) char outline;                                               //@synthesize outline=_outline - In the implementation block
+(id)imageWithIcon:(id)arg1 size:(CGSize)arg2 background:(char)arg3 ;
+(id)imageWithIcon:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 glyphColor:(id)arg4 background:(char)arg5 ;
+(id)imageWithIcon:(id)arg1 size:(CGSize)arg2 ;
+(id)glyphImageWithIcon:(id)arg1 size:(CGSize)arg2 ;
+(id)pngDataForImageWithIcon:(id)arg1 size:(CGSize)arg2 ;
-(id)init;
-(void)setBackgroundColor:(WFColor *)arg1 ;
-(WFColor *)backgroundColor;
-(void)setCornerRadius:(double)arg1 ;
-(void)setIcon:(id)arg1 ;
-(double)cornerRadius;
-(WFColor *)glyphColor;
-(void)setGlyphColor:(WFColor *)arg1 ;
-(void)setGlyphSize:(CGSize)arg1 ;
-(CGSize)glyphSize;
-(char)outline;
-(void)setOutline:(char)arg1 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)initWithIcon:(id)arg1 ;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 ;
-(char)dark;
-(void)setDark:(char)arg1 ;
-(char)drawBackground;
-(void)setDrawBackground:(char)arg1 ;
-(unsigned short)glyphCharacter;
-(id)initWithIcon:(id)arg1 drawerContext:(id)arg2 ;
-(NSData *)customImageData;
-(id)initWithHomeScreenIcon:(id)arg1 ;
-(id)initWithDrawerContext:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(WFWorkflowIconDrawerContext *)drawerContext;
-(void)setGlyphCharacter:(unsigned short)arg1 ;
-(void)setCustomImageData:(NSData *)arg1 ;
-(char)useCustomImage;
-(void)setUseCustomImage:(char)arg1 ;
-(char)rounded;
-(void)setRounded:(char)arg1 ;
-(char)highContrast;
-(void)setHighContrast:(char)arg1 ;
@end

