/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Suggestions/Suggestions-Structs.h>
#import <AppKit/NSTokenAttachmentCell.h>

@class NSString, NSMenu, NSView, SGTSuggestion;

@interface SGTSuggestionAttachmentCell : NSTokenAttachmentCell {

	NSString* _lastKnownScopeString;
	CGSize _scopeSize;
	NSMenu* _popMenu;
	NSView* viewForMenu;
	CGRect frameForMenu;
	int useShorterName;
	char _leftClicked;
	NSView* _controlView;

}

@property (readonly) SGTSuggestion * suggestion; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)textColor;
-(char)isEditable;
-(id)initTextCell:(id)arg1 ;
-(id)initImageCell:(id)arg1 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(char)arg5 ;
-(char)_hasMenu;
-(CGRect)pullDownRectForBounds:(CGRect)arg1 ;
-(void)drawTokenWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(long long)_currentState;
-(SGTSuggestion *)suggestion;
-(char)popScopeMenuInControlView:(id)arg1 inRect:(CGRect)arg2 ;
-(char)_shouldDrawScopeComponent;
-(id)_tokenTitleAttributesWithColor:(id)arg1 ;
-(void)_popMenuDiscarded;
-(CGRect)imageContainerRectForBounds:(CGRect)arg1 ;
-(void)_updateScopeStringWidth;
-(CGRect)titleContainerRectForBounds:(CGRect)arg1 ;
-(id)_componentColor:(long long)arg1 state:(long long)arg2 isDark:(char)arg3 ;
-(id)pullDownImageWithColor:(id)arg1 ;
-(void)_showMenu;
-(CGRect)realImageFrameForImage:(id)arg1 cellFrame:(CGRect)arg2 ;
@end
