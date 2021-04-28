/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTouchBarCustomizationPreviewSectionLayout.h>

@interface NSTouchBarCustomizationPreviewFlexibleSectionLayout : NSTouchBarCustomizationPreviewSectionLayout {

	double _defaultItemPadding;
	double _cachedVisualCenterXOffset;

}

@property (assign) double defaultItemPadding;              //@synthesize defaultItemPadding=_defaultItemPadding - In the implementation block
-(void)prepareLayout;
-(void)setDefaultItemPadding:(double)arg1 ;
-(double)defaultItemPadding;
-(id)canMoveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 byRemovingItems:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 section:(long long)arg2 ;
-(char)canInsertItem:(id)arg1 atIndex:(long long)arg2 ;
@end
