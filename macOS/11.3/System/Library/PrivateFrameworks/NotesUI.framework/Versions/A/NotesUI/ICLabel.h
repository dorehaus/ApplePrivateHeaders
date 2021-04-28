/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <AppKit/NSTextField.h>

@class NSString, NSAttributedString, NSLayoutConstraint;

@interface ICLabel : NSTextField {

	NSString* _string;
	NSAttributedString* _attributedString;
	long long _numberOfLines;
	double _spacing;
	double _paragraphSpacing;
	double _lineHeight;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * minimumHeightConstraint;              //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                     //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,copy) NSString * string;                                           //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;                       //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                   //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) double spacing;                                            //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double paragraphSpacing;                                   //@synthesize paragraphSpacing=_paragraphSpacing - In the implementation block
@property (assign,nonatomic) double lineHeight;                                         //@synthesize lineHeight=_lineHeight - In the implementation block
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(double)paragraphSpacing;
-(void)setParagraphSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)textDidChange:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)lineHeight;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)updateText;
-(long long)numberOfLines;
-(void)setLineHeight:(double)arg1 ;
-(void)updatePreferredMaxLayoutWidth:(id)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateHeightConstraint;
@end

