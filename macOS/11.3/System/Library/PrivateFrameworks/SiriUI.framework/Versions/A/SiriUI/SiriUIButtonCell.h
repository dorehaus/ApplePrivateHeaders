/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface SiriUIButtonCell : NSButtonCell {

	NSEdgeInsets _imageEdgeInsets;
	NSEdgeInsets _titleEdgeInsets;

}

@property (assign) NSEdgeInsets imageEdgeInsets;              //@synthesize imageEdgeInsets=_imageEdgeInsets - In the implementation block
@property (assign) NSEdgeInsets titleEdgeInsets;              //@synthesize titleEdgeInsets=_titleEdgeInsets - In the implementation block
-(CGRect)drawTitle:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)drawImage:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)setImageEdgeInsets:(NSEdgeInsets)arg1 ;
-(void)setTitleEdgeInsets:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)imageEdgeInsets;
-(NSEdgeInsets)titleEdgeInsets;
@end

