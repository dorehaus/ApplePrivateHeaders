/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFDetailedRowCardSection.h>
@class NSArray, NSString, SFColor, SFImage, SFRichText, SFFormattedText, SFActionItem, SFButton, NSDictionary, NSData;


@protocol SFDetailedRowCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) char canBeHidden; 
@property (assign,nonatomic) char hasTopPadding; 
@property (assign,nonatomic) char hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (assign,nonatomic) char preventThumbnailImageScaling; 
@property (nonatomic,retain) SFRichText * title; 
@property (nonatomic,retain) SFFormattedText * secondaryTitle; 
@property (nonatomic,retain) SFImage * secondaryTitleImage; 
@property (assign,nonatomic) char isSecondaryTitleDetached; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,retain) SFRichText * footnote; 
@property (nonatomic,retain) SFFormattedText * trailingTopText; 
@property (nonatomic,retain) SFFormattedText * trailingMiddleText; 
@property (nonatomic,retain) SFFormattedText * trailingBottomText; 
@property (nonatomic,retain) SFActionItem * action; 
@property (nonatomic,retain) SFButton * button; 
@property (assign,nonatomic) char shouldUseCompactDisplay; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(SFActionItem *)action;
-(void)setAction:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(SFRichText *)title;
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(SFButton *)button;
-(void)setThumbnail:(id)arg1;
-(SFImage *)thumbnail;
-(NSArray *)punchoutOptions;
-(void)setDescriptions:(id)arg1;
-(void)setFootnote:(id)arg1;
-(NSArray *)descriptions;
-(SFFormattedText *)secondaryTitle;
-(void)setSecondaryTitle:(id)arg1;
-(SFRichText *)footnote;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(void)setShouldUseCompactDisplay:(char)arg1;
-(void)setButton:(id)arg1;
-(void)setPreventThumbnailImageScaling:(char)arg1;
-(void)setIsSecondaryTitleDetached:(char)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(char)arg1;
-(void)setHasTopPadding:(char)arg1;
-(void)setTrailingTopText:(id)arg1;
-(void)setTrailingMiddleText:(id)arg1;
-(void)setTrailingBottomText:(id)arg1;
-(char)shouldUseCompactDisplay;
-(char)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(char)isSecondaryTitleDetached;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1;
-(int)separatorStyle;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, SFRichText, SFFormattedText, SFActionItem, SFButton, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFDetailedRowCardSection : SFCardSection <SFDetailedRowCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF8 _has;
	char _canBeHidden;
	char _hasTopPadding;
	char _hasBottomPadding;
	char _preventThumbnailImageScaling;
	char _isSecondaryTitleDetached;
	char _shouldUseCompactDisplay;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFImage* _thumbnail;
	SFRichText* _title;
	SFFormattedText* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	NSArray* _descriptions;
	SFRichText* _footnote;
	SFFormattedText* _trailingTopText;
	SFFormattedText* _trailingMiddleText;
	SFFormattedText* _trailingBottomText;
	SFActionItem* _action;
	SFButton* _button;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) char canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) char hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) char hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) char preventThumbnailImageScaling;                      //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (nonatomic,retain) SFRichText * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFFormattedText * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) SFImage * secondaryTitleImage;                          //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (assign,nonatomic) char isSecondaryTitleDetached;                          //@synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached - In the implementation block
@property (nonatomic,copy) NSArray * descriptions;                                   //@synthesize descriptions=_descriptions - In the implementation block
@property (nonatomic,retain) SFRichText * footnote;                                  //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingTopText;                      //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingMiddleText;                   //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (nonatomic,retain) SFFormattedText * trailingBottomText;                   //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
@property (nonatomic,retain) SFActionItem * action;                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) SFButton * button;                                      //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) char shouldUseCompactDisplay;                           //@synthesize shouldUseCompactDisplay=_shouldUseCompactDisplay - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) char hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFCommand * command; 
@property (nonatomic,retain) SFCommand * previewCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(Class)_searchUIViewClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(SFActionItem *)action;
-(void)setAction:(SFActionItem *)arg1 ;
-(void)setTitle:(SFRichText *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(SFRichText *)title;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFColor *)backgroundColor;
-(SFButton *)button;
-(void)setThumbnail:(SFImage *)arg1 ;
-(SFImage *)thumbnail;
-(NSArray *)punchoutOptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setFootnote:(SFRichText *)arg1 ;
-(NSArray *)descriptions;
-(SFFormattedText *)secondaryTitle;
-(void)setSecondaryTitle:(SFFormattedText *)arg1 ;
-(SFRichText *)footnote;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setShouldUseCompactDisplay:(char)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setButton:(SFButton *)arg1 ;
-(void)setPreventThumbnailImageScaling:(char)arg1 ;
-(void)setIsSecondaryTitleDetached:(char)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(char)arg1 ;
-(void)setHasTopPadding:(char)arg1 ;
-(void)setTrailingTopText:(SFFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(SFFormattedText *)arg1 ;
-(void)setTrailingBottomText:(SFFormattedText *)arg1 ;
-(char)shouldUseCompactDisplay;
-(char)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(char)isSecondaryTitleDetached;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1 ;
-(int)separatorStyle;
-(char)hasCanBeHidden;
-(char)hasHasTopPadding;
-(char)hasHasBottomPadding;
-(char)hasSeparatorStyle;
-(SFFormattedText *)trailingTopText;
-(SFFormattedText *)trailingMiddleText;
-(SFFormattedText *)trailingBottomText;
-(char)hasPreventThumbnailImageScaling;
-(char)hasIsSecondaryTitleDetached;
-(char)hasShouldUseCompactDisplay;
@end

