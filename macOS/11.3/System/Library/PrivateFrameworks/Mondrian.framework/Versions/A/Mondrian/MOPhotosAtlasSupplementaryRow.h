/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <UXKit/UXCollectionReusableView.h>

@protocol MOAccessibilityChildrenDelegate;
@class NSString;

@interface MOPhotosAtlasSupplementaryRow : UXCollectionReusableView {

	NSString* _uuid;
	id _rowImage;
	char _clearRowImage;
	CGRect _contentsRect;
	id<MOAccessibilityChildrenDelegate> _accessibilityDelegate;
	long long _accessibilitySelectedChildIndex;

}

@property (assign,nonatomic,__weak) id<MOAccessibilityChildrenDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
@property (assign) long long accessibilitySelectedChildIndex;                                               //@synthesize accessibilitySelectedChildIndex=_accessibilitySelectedChildIndex - In the implementation block
@property (readonly) NSString * uuid;                                                                       //@synthesize uuid=_uuid - In the implementation block
+(void)clearColorCaches;
+(CGColorRef)rowEmptyColor;
+(id)rowEmptyImage;
-(char)isEmpty;
-(NSString *)uuid;
-(void)prepareForReuse;
-(void)layout;
-(id)indexPath;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(id)accessibilityChildren;
-(id<MOAccessibilityChildrenDelegate>)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id<MOAccessibilityChildrenDelegate>)arg1 ;
-(id)representedElementKind;
-(void)prepareForRecycling;
-(void)setRowImage:(id)arg1 ;
-(void)setRowImage:(id)arg1 contentsRect:(CGRect)arg2 ;
-(id)rowImage;
-(long long)accessibilitySelectedChildIndex;
-(void)setAccessibilitySelectedChildIndex:(long long)arg1 ;
@end

