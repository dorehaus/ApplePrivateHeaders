/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/AMTextFieldCell.h>

@class NSImage;

@interface AMImageTextCell : AMTextFieldCell {

	NSImage* _image;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEnabled;
-(void)setImage:(id)arg1 ;
-(id)image;
-(char)isEditable;
-(CGSize)cellSize;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)isSelectable;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
@end

