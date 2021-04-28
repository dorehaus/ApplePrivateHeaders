/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstallerPlugins.framework/Versions/A/InstallerPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallerPlugins/InstallerPlugins-Structs.h>
#import <AppKit/NSView.h>

@class NSImageView, NSImage, NSString;

@interface IFXBackgroundImageView : NSView {

	NSImageView* _imageCell;

}

@property (retain) NSImage * image; 
@property (assign) unsigned long long imageAlignment; 
@property (assign) unsigned long long imageScaling; 
@property (retain) NSString * imageAccessibilityIdentifier; 
-(void)dealloc;
-(void)setImage:(NSImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)setImageAlignment:(unsigned long long)arg1 ;
-(unsigned long long)imageScaling;
-(unsigned long long)imageAlignment;
-(void)setImageAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)imageAccessibilityIdentifier;
@end

