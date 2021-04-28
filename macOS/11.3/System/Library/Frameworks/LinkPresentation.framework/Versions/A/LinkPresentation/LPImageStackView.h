/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPImageStackView : LPComponentView {

	NSArray* _images;
	LPImageViewStyle* _style;
	NSMutableArray* _imageViews;

}
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutComponentView;
-(id)initWithImages:(id)arg1 style:(id)arg2 ;
-(CGSize)_layoutImagesForSize:(CGSize)arg1 applyingLayout:(char)arg2 ;
@end

