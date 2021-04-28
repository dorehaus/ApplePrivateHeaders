/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/_NSAsynchronousPreparationInputParameters.h>

@class NSImage, NSColorSpace, NSAppearance, NSString;

@interface _NSImageViewAsynchronousPreparationInputParameters : NSObject <_NSAsynchronousPreparationInputParameters> {

	NSImage* _asynchronousImage;
	NSColorSpace* _colorSpace;
	CGRect _bounds;
	CGAffineTransform _transform;
	NSAppearance* _appearance;
	unsigned long long _frameStyle;
	unsigned long long _imageScaling;
	unsigned long long _imageAlignment;
	char _flipped;

}

@property (nonatomic,retain) NSImage * asynchronousImage;                    //@synthesize asynchronousImage=_asynchronousImage - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                  //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,retain) NSColorSpace * colorSpace;                      //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                    //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) NSAppearance * appearance;                      //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic) unsigned long long frameStyle;                  //@synthesize frameStyle=_frameStyle - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) unsigned long long imageAlignment;              //@synthesize imageAlignment=_imageAlignment - In the implementation block
@property (assign,getter=isFlipped,nonatomic) char flipped;                  //@synthesize flipped=_flipped - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsInvalidatingPreparedResult;
+(id)keyPathsInvalidatingPreparedResultImmediately;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGAffineTransform)transform;
-(CGRect)bounds;
-(char)isFlipped;
-(void)setColorSpace:(NSColorSpace *)arg1 ;
-(NSAppearance *)appearance;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(NSColorSpace *)colorSpace;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAppearance:(NSAppearance *)arg1 ;
-(void)setImageAlignment:(unsigned long long)arg1 ;
-(void)setFlipped:(char)arg1 ;
-(unsigned long long)imageScaling;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)imageAlignment;
-(NSImage *)asynchronousImage;
-(unsigned long long)frameStyle;
-(void)setAsynchronousImage:(NSImage *)arg1 ;
-(void)setFrameStyle:(unsigned long long)arg1 ;
@end
