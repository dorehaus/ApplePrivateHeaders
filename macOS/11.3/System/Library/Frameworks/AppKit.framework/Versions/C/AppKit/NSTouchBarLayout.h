/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSTouchBarLayout : NSObject {

	double _visualCenterX;
	double _defaultItemPadding;
	double _standardCenterWidth;
	double _leadingWidgetWidth;
	char _enforcesUniformHeight;
	char _centerIsPrincipal;
	char _allowsSingleItemClipping;
	char _overflowPreventsReflow;
	char _centerRequiresTrueCenterLayout;
	char _overlayRequiresTrueCenterLayout;
	char _overflowRequired;
	long long _accessoryUserInterfaceLayoutDirection;
	long long _itemUserInterfaceLayoutDirection;

}

@property (assign) double visualCenterX;                                         //@synthesize visualCenterX=_visualCenterX - In the implementation block
@property (assign) double defaultItemPadding;                                    //@synthesize defaultItemPadding=_defaultItemPadding - In the implementation block
@property (assign) char enforcesUniformHeight;                                   //@synthesize enforcesUniformHeight=_enforcesUniformHeight - In the implementation block
@property (getter=isCenterPrincipal) char centerIsPrincipal;                     //@synthesize centerIsPrincipal=_centerIsPrincipal - In the implementation block
@property (assign) long long accessoryUserInterfaceLayoutDirection;              //@synthesize accessoryUserInterfaceLayoutDirection=_accessoryUserInterfaceLayoutDirection - In the implementation block
@property (assign) long long itemUserInterfaceLayoutDirection;                   //@synthesize itemUserInterfaceLayoutDirection=_itemUserInterfaceLayoutDirection - In the implementation block
@property (assign) double standardCenterWidth;                                   //@synthesize standardCenterWidth=_standardCenterWidth - In the implementation block
@property (assign) double leadingWidgetWidth; 
@property (assign) char allowsSingleItemClipping;                                //@synthesize allowsSingleItemClipping=_allowsSingleItemClipping - In the implementation block
@property (assign) char centerRequiresTrueCenterLayout;                          //@synthesize centerRequiresTrueCenterLayout=_centerRequiresTrueCenterLayout - In the implementation block
@property (assign) char overlayRequiresTrueCenterLayout;                         //@synthesize overlayRequiresTrueCenterLayout=_overlayRequiresTrueCenterLayout - In the implementation block
@property (assign) char overflowPreventsReflow;                                  //@synthesize overflowPreventsReflow=_overflowPreventsReflow - In the implementation block
@property (assign) char overflowRequired;                                        //@synthesize overflowRequired=_overflowRequired - In the implementation block
+(id)touchBarLayoutWithVisualCenterX:(double)arg1 ;
+(id)toolbarLayoutWithVisualCenterX:(double)arg1 ;
-(id)init;
-(id)initWithVisualCenterX:(double)arg1 ;
-(void)setStandardCenterWidth:(double)arg1 ;
-(void)setCenterIsPrincipal:(char)arg1 ;
-(void)setAllowsSingleItemClipping:(char)arg1 ;
-(void)setDefaultItemPadding:(double)arg1 ;
-(void)setEnforcesUniformHeight:(char)arg1 ;
-(void)setOverflowPreventsReflow:(char)arg1 ;
-(double)defaultItemPadding;
-(double)_minWidthOfItems:(id)arg1 sharesLeftEdge:(char)arg2 sharesRightEdge:(char)arg3 ;
-(char)_isOverflowRequiredForItems:(id)arg1 availableWidth:(double)arg2 sharesLeftEdge:(char)arg3 sharesRightEdge:(char)arg4 ;
-(id)_attributesOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(CGSize)arg3 sharesLeftEdge:(char)arg4 sharesRightEdge:(char)arg5 xOrigin:(double)arg6 ;
-(void)_calculateMinimumLayoutOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(CGSize)arg3 originX:(double)arg4 itemsToFrames:(id)arg5 ;
-(id)_calculateLayoutOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(CGSize)arg3 originX:(double)arg4 requiresTrueCenterLayout:(char)arg5 ;
-(void)_adjustForItemUserInterfaceLayoutDirection:(long long)arg1 items:(id)arg2 itemsToAttributes:(id)arg3 availableWidth:(double)arg4 xOrigin:(double)arg5 ;
-(void)_touchUpSpacesInItems:(id)arg1 itemsToAttributes:(id)arg2 ;
-(id)_prioritizedAndGroupedItems:(id)arg1 ;
-(double)_compressedMinWidthOfItems:(id)arg1 sharesLeftEdge:(char)arg2 sharesRightEdge:(char)arg3 ;
-(id)_orderedItemsGivenUnorderedArray:(id)arg1 usingOrderedArray:(id)arg2 ;
-(id)_calculateMinimumLayoutOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(CGSize)arg3 originX:(double)arg4 ;
-(double)_adjustedHeightForItem:(id)arg1 availableHeight:(double)arg2 ;
-(char)isCenterPrincipal;
-(CGRect)_centerRectGivenItems:(id)arg1 remainingLeftWidth:(double)arg2 remainingRightWidth:(double)arg3 totalWidth:(double)arg4 sharesLeftEdge:(char)arg5 sharesRightEdge:(char)arg6 requiresTrueCenterLayout:(char)arg7 ;
-(CGRect)_centerRectGivenItems:(id)arg1 leftItems:(id)arg2 rightItems:(id)arg3 totalWidth:(double)arg4 xOrigin:(double)arg5 ;
-(void)_calculateLayoutOfItems:(id)arg1 withAvailableSize:(CGSize)arg2 startingWidth:(double)arg3 xOrigin:(double)arg4 sharesLeftEdge:(char)arg5 sharesRightEdge:(char)arg6 accountsForWidgetSpace:(char)arg7 itemsToFrames:(id)arg8 ;
-(void)_divideAndCalculateLayoutOfItems:(id)arg1 withAvailableSize:(CGSize)arg2 startingWidth:(double)arg3 xOrigin:(double)arg4 sharesLeftEdge:(char)arg5 sharesRightEdge:(char)arg6 accountsForWidgetSpace:(char)arg7 itemsToFrames:(id)arg8 ;
-(double)_maxWidthOfItems:(id)arg1 sharesLeftEdge:(char)arg2 sharesRightEdge:(char)arg3 containsFlexibleSpaceItems:(char*)arg4 ;
-(double)_contentClippingWidthOfItems:(id)arg1 sharesLeftEdge:(char)arg2 sharesRightEdge:(char)arg3 ;
-(double)_leftInsetOfItems:(id)arg1 sharesLeftEdge:(char)arg2 ;
-(double)_rightInsetOfItems:(id)arg1 sharesRightEdge:(char)arg2 ;
-(id)_prioritizedItems:(id)arg1 ;
-(double)_aggregateWidthOfItems:(id)arg1 sharesLeftEdge:(char)arg2 sharesRightEdge:(char)arg3 widthMeasurement:(/*^block*/id)arg4 ;
-(double)leadingWidgetWidth;
-(void)setLeadingWidgetWidth:(double)arg1 ;
-(id)attributesOfItems:(id)arg1 centerItems:(id)arg2 givenSize:(CGSize)arg3 ;
-(void)items:(id)arg1 centerItems:(id)arg2 minSize:(CGSize*)arg3 maxSize:(CGSize*)arg4 ;
-(id)_overflowMenuParticipatingItems:(id)arg1 ;
-(double)visualCenterX;
-(void)setVisualCenterX:(double)arg1 ;
-(char)enforcesUniformHeight;
-(long long)accessoryUserInterfaceLayoutDirection;
-(void)setAccessoryUserInterfaceLayoutDirection:(long long)arg1 ;
-(long long)itemUserInterfaceLayoutDirection;
-(void)setItemUserInterfaceLayoutDirection:(long long)arg1 ;
-(double)standardCenterWidth;
-(char)allowsSingleItemClipping;
-(char)overflowPreventsReflow;
-(char)centerRequiresTrueCenterLayout;
-(void)setCenterRequiresTrueCenterLayout:(char)arg1 ;
-(char)overlayRequiresTrueCenterLayout;
-(void)setOverlayRequiresTrueCenterLayout:(char)arg1 ;
-(char)overflowRequired;
-(void)setOverflowRequired:(char)arg1 ;
@end

