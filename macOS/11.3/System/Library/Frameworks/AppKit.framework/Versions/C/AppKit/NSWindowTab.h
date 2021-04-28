/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, NSImage, NSView, NSTabBarItem, NSWindow;

@interface NSWindowTab : NSObject {

	NSString* _title;
	NSAttributedString* _attributedTitle;
	NSString* _toolTip;
	NSImage* _image;
	NSView* _accessoryView;
	NSTabBarItem* _tabBarItem;
	NSWindow* _window;
	char _showIcon;

}

@property (__weak) NSWindow * window;                               //@synthesize window=_window - In the implementation block
@property (copy) NSImage * image; 
@property (assign) char showIcon; 
@property (readonly) NSTabBarItem * tabBarItem; 
@property (copy) NSString * title; 
@property (copy) NSAttributedString * attributedTitle; 
@property (copy) NSString * toolTip; 
@property (retain) NSView * accessoryView; 
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSWindow *)window;
-(NSAttributedString *)attributedTitle;
-(NSString *)title;
-(NSImage *)image;
-(void)setWindow:(NSWindow *)arg1 ;
-(NSTabBarItem *)tabBarItem;
-(NSString *)toolTip;
-(void)setToolTip:(NSString *)arg1 ;
-(NSView *)accessoryView;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
@end

