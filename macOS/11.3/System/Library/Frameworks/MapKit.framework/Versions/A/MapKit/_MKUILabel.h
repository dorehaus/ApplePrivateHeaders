/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSTextField.h>
#import <libobjc.A.dylib/MKMultilineText.h>

@class NSFont, NSString, NSAttributedString;

@interface _MKUILabel : NSTextField <MKMultilineText> {

	double _cachedBaselineOffsetFromBottom;
	char _haveCachedBaselineOffsetFromBottom;
	char _adjustsFontSizeToFitWidth;
	NSFont* _font;
	char _collapsesWhenEmpty;
	/*^block*/id __mapkit_themeColorProvider;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) char collapsesWhenEmpty;                        //@synthesize collapsesWhenEmpty=_collapsesWhenEmpty - In the implementation block
@property (nonatomic,copy) id _mapkit_themeColorProvider;                    //@synthesize _mapkit_themeColorProvider=__mapkit_themeColorProvider - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) char adjustsFontSizeToFitWidth;                 //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth; 
@property (assign) CGRect frame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
+(id)keyPathsForValuesAffectingAlignment;
+(id)keyPathsForValuesAffectingText;
+(id)keyPathsForValuesAffectingAttributedText;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)font;
-(void)setFont:(id)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(NSAttributedString *)attributedText;
-(long long)textAlignment;
-(void)setText:(NSString *)arg1 ;
-(void)set_mapkit_themeColorProvider:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)infoCardThemeChanged;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setCollapsesWhenEmpty:(char)arg1 ;
-(long long)numberOfLines;
-(void)_updateFontSize;
-(char)collapsesWhenEmpty;
-(void)setAdjustsFontSizeToFitWidth:(char)arg1 ;
-(id)_mapkit_themeColorProvider;
-(char)adjustsFontSizeToFitWidth;
@end

