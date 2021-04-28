/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSMutableArray;

@interface AKLabelViewCell : NSActionCell {

	NSMutableArray* _partItems;
	long long _selectedParts;
	long long _hoveredPart;
	unsigned long long _imagePosition;
	char _allowsMultipleSelection;
	long long _focusedPart;

}

@property (assign) long long numParts; 
@property (assign) long long selectedParts; 
@property (assign) unsigned long long imagePosition;              //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign) char allowsMultipleSelection;                  //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (assign) long long focusedPart; 
@property (assign) long long hoveredPart;                         //@synthesize hoveredPart=_hoveredPart - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImagePosition:(unsigned long long)arg1 ;
-(unsigned long long)imagePosition;
-(void)performClick:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_commonInit;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(long long)numParts;
-(CGRect)part:(long long)arg1 boundsWithFrame:(CGRect)arg2 ;
-(void)mouseEntered:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)mouseExited:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)setHoveredPart:(long long)arg1 ;
-(long long)focusedPart;
-(void)setFocusedPart:(long long)arg1 ;
-(char)_isSelectedPart:(long long)arg1 ;
-(void)_selectPart:(long long)arg1 ;
-(id)_labelAttributes;
-(void)_drawBackgroundForPartRect:(CGRect)arg1 isPressedOrHovered:(char)arg2 ;
-(char)_isHoveredPart:(long long)arg1 ;
-(id)_nameForLabelPart:(long long)arg1 ;
-(void)_drawPart:(long long)arg1 withFrame:(CGRect)arg2 ;
-(id)_currentLabelName;
-(CGRect)_boundsForLabel:(id)arg1 withFrame:(CGRect)arg2 ;
-(long long)_partAtPoint:(CGPoint)arg1 inFrame:(CGRect)arg2 ;
-(void)_handleMouseMovedForEvent:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)_deselectPart:(long long)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(long long)hoveredPart;
-(void)_commonDealloc;
-(id)imageForPart:(long long)arg1 ;
-(id)labelForPart:(long long)arg1 ;
-(void)setImage:(id)arg1 forPart:(long long)arg2 ;
-(void)setLabel:(id)arg1 forPart:(long long)arg2 ;
-(long long)selectedParts;
-(void)setSelectedParts:(long long)arg1 ;
-(void)setNumParts:(long long)arg1 ;
@end

