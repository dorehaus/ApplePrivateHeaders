/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/_IKiOSStyleGroupCell.h>

@interface IKiOSStyleGroupCell : _IKiOSStyleGroupCell {

	id _currentRenderedImage;
	float _rotation;

}

@property (assign) float rotation;              //@synthesize rotation=_rotation - In the implementation block
-(char)_transform:(CATransform3D*)arg1 forLayer:(id)arg2 inFrame:(CGRect)arg3 ;
-(void)drawSubtitle;
-(char)canBeDoubleClicked;
-(char)canDisplayInlinePreview;
-(void)pushTransform;
-(void)popTransform;
-(double)fogFactorDueToRotation;
-(double)fogFactorDueToMargin;
-(double)fogFactor;
-(double)rotatedTextAlphaFactor;
-(void)drawReflection:(id)arg1 ;
-(void)invalidate;
-(float)rotation;
-(void)draw;
-(void)setRotation:(float)arg1 ;
-(void)drawImage:(id)arg1 ;
-(void)drawTitle;
-(void)drawSelection;
@end

