/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSTableRowView.h>

@class NSTextField, NSString;

@interface IKPTSidebarRowView : NSTableRowView {

	NSTextField* _label;

}

@property (nonatomic,copy) NSString * title; 
+(id)newLabel;
-(void)layoutLabel;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(char)arg1 ;
@end

