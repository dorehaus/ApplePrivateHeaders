/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <AppKit/NSSegmentedControl.h>

@class NSString, NSImage;

@interface UXBackButton : NSSegmentedControl {

	char _hidesTitle;
	NSString* _title;
	NSImage* _image;

}

@property (assign,nonatomic) char hidesTitle;              //@synthesize hidesTitle=_hidesTitle - In the implementation block
@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSImage * image;              //@synthesize image=_image - In the implementation block
-(id)description;
-(id)init;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSImage *)image;
-(id)accessibilityRole;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityPerformPress;
-(void)setHidesTitle:(char)arg1 ;
-(char)hidesTitle;
@end
