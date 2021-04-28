/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBRichTitleCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBActionItem, _SFPBRichText, NSData;


@protocol _SFPBRichTitleCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) char canBeHidden; 
@property (assign,nonatomic) char hasTopPadding; 
@property (assign,nonatomic) char hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,retain) _SFPBImage * titleImage; 
@property (assign,nonatomic) char isCentered; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (assign,nonatomic) float rating; 
@property (nonatomic,copy) NSString * ratingText; 
@property (nonatomic,retain) _SFPBImage * reviewGlyph; 
@property (nonatomic,copy) NSString * reviewText; 
@property (assign,nonatomic) char reviewNewLine; 
@property (nonatomic,copy) NSArray * moreGlyphs; 
@property (nonatomic,copy) NSString * auxiliaryTopText; 
@property (nonatomic,copy) NSString * auxiliaryMiddleText; 
@property (nonatomic,copy) NSString * auxiliaryBottomText; 
@property (assign,nonatomic) int auxiliaryBottomTextColor; 
@property (assign,nonatomic) int auxiliaryAlignment; 
@property (assign,nonatomic) char hideVerticalDivider; 
@property (assign,nonatomic) int titleAlign; 
@property (assign,nonatomic) int titleWeight; 
@property (assign,nonatomic) char titleNoWrap; 
@property (assign,nonatomic) char thumbnailCropCircle; 
@property (nonatomic,retain) _SFPBImage * imageOverlay; 
@property (nonatomic,retain) _SFPBActionItem * playAction; 
@property (assign,nonatomic) int playActionAlign; 
@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,retain) _SFPBRichText * richSubtitle; 
@property (assign,nonatomic) char subtitleIsEmphasized; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(char)isCentered;
-(void)setRating:(float)arg1;
-(float)rating;
-(id)initWithJSON:(id)arg1;
-(NSString *)descriptionText;
-(void)setDescriptionText:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setFootnote:(id)arg1;
-(void)setReviewText:(id)arg1;
-(NSString *)footnote;
-(NSString *)reviewText;
-(NSData *)jsonData;
-(_SFPBImage *)titleImage;
-(void)setTitleImage:(id)arg1;
-(NSArray *)offers;
-(void)setOffers:(id)arg1;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(NSArray *)moreGlyphs;
-(void)setMoreGlyphs:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(void)setIsCentered:(char)arg1;
-(void)setAuxiliaryTopText:(id)arg1;
-(void)setAuxiliaryMiddleText:(id)arg1;
-(void)setAuxiliaryBottomText:(id)arg1;
-(void)setAuxiliaryBottomTextColor:(int)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(char)arg1;
-(void)setReviewGlyph:(id)arg1;
-(void)setReviewNewLine:(char)arg1;
-(void)setAuxiliaryAlignment:(int)arg1;
-(void)setHideVerticalDivider:(char)arg1;
-(void)setTitleAlign:(int)arg1;
-(void)setTitleWeight:(int)arg1;
-(void)setThumbnailCropCircle:(char)arg1;
-(void)setImageOverlay:(id)arg1;
-(void)setRatingText:(id)arg1;
-(void)setPlayAction:(id)arg1;
-(void)setPlayActionAlign:(int)arg1;
-(void)setTitleNoWrap:(char)arg1;
-(void)setHasTopPadding:(char)arg1;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1;
-(int)separatorStyle;
-(char)titleNoWrap;
-(int)titleWeight;
-(_SFPBActionItem *)playAction;
-(_SFPBImage *)reviewGlyph;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)addOffers:(id)arg1;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1;
-(void)addMoreGlyphs:(id)arg1;
-(void)setRichSubtitle:(id)arg1;
-(void)setSubtitleIsEmphasized:(char)arg1;
-(NSString *)ratingText;
-(char)reviewNewLine;
-(int)auxiliaryAlignment;
-(char)hideVerticalDivider;
-(int)titleAlign;
-(char)thumbnailCropCircle;
-(_SFPBImage *)imageOverlay;
-(int)playActionAlign;
-(_SFPBRichText *)richSubtitle;
-(char)subtitleIsEmphasized;
-(void)clearMoreGlyphs;
-(unsigned long long)moreGlyphsCount;
-(id)moreGlyphsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBActionItem, _SFPBRichText, NSData;

@interface _SFPBRichTitleCardSection : PBCodable <_SFPBRichTitleCardSection, NSSecureCoding> {

	char _canBeHidden;
	char _hasTopPadding;
	char _hasBottomPadding;
	char _isCentered;
	char _reviewNewLine;
	char _hideVerticalDivider;
	char _titleNoWrap;
	char _thumbnailCropCircle;
	char _subtitleIsEmphasized;
	int _separatorStyle;
	float _rating;
	int _auxiliaryBottomTextColor;
	int _auxiliaryAlignment;
	int _titleAlign;
	int _titleWeight;
	int _playActionAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	NSString* _contentAdvisory;
	_SFPBImage* _titleImage;
	NSString* _descriptionText;
	NSString* _ratingText;
	_SFPBImage* _reviewGlyph;
	NSString* _reviewText;
	NSArray* _moreGlyphs;
	NSString* _auxiliaryTopText;
	NSString* _auxiliaryMiddleText;
	NSString* _auxiliaryBottomText;
	_SFPBImage* _imageOverlay;
	_SFPBActionItem* _playAction;
	NSArray* _offers;
	NSString* _footnote;
	_SFPBRichText* _richSubtitle;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) char canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) char hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) char hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                        //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) _SFPBImage * titleImage;                         //@synthesize titleImage=_titleImage - In the implementation block
@property (assign,nonatomic) char isCentered;                                 //@synthesize isCentered=_isCentered - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                        //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) float rating;                                    //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * ratingText;                             //@synthesize ratingText=_ratingText - In the implementation block
@property (nonatomic,retain) _SFPBImage * reviewGlyph;                        //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                             //@synthesize reviewText=_reviewText - In the implementation block
@property (assign,nonatomic) char reviewNewLine;                              //@synthesize reviewNewLine=_reviewNewLine - In the implementation block
@property (nonatomic,copy) NSArray * moreGlyphs;                              //@synthesize moreGlyphs=_moreGlyphs - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryTopText;                       //@synthesize auxiliaryTopText=_auxiliaryTopText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMiddleText;                    //@synthesize auxiliaryMiddleText=_auxiliaryMiddleText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryBottomText;                    //@synthesize auxiliaryBottomText=_auxiliaryBottomText - In the implementation block
@property (assign,nonatomic) int auxiliaryBottomTextColor;                    //@synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor - In the implementation block
@property (assign,nonatomic) int auxiliaryAlignment;                          //@synthesize auxiliaryAlignment=_auxiliaryAlignment - In the implementation block
@property (assign,nonatomic) char hideVerticalDivider;                        //@synthesize hideVerticalDivider=_hideVerticalDivider - In the implementation block
@property (assign,nonatomic) int titleAlign;                                  //@synthesize titleAlign=_titleAlign - In the implementation block
@property (assign,nonatomic) int titleWeight;                                 //@synthesize titleWeight=_titleWeight - In the implementation block
@property (assign,nonatomic) char titleNoWrap;                                //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (assign,nonatomic) char thumbnailCropCircle;                        //@synthesize thumbnailCropCircle=_thumbnailCropCircle - In the implementation block
@property (nonatomic,retain) _SFPBImage * imageOverlay;                       //@synthesize imageOverlay=_imageOverlay - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * playAction;                    //@synthesize playAction=_playAction - In the implementation block
@property (assign,nonatomic) int playActionAlign;                             //@synthesize playActionAlign=_playActionAlign - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                  //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * footnote;                               //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) _SFPBRichText * richSubtitle;                    //@synthesize richSubtitle=_richSubtitle - In the implementation block
@property (assign,nonatomic) char subtitleIsEmphasized;                       //@synthesize subtitleIsEmphasized=_subtitleIsEmphasized - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(char)isCentered;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setReviewText:(NSString *)arg1 ;
-(NSString *)footnote;
-(NSString *)reviewText;
-(NSData *)jsonData;
-(_SFPBImage *)titleImage;
-(void)setTitleImage:(_SFPBImage *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(NSArray *)moreGlyphs;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setIsCentered:(char)arg1 ;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(int)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(char)arg1 ;
-(void)setReviewGlyph:(_SFPBImage *)arg1 ;
-(void)setReviewNewLine:(char)arg1 ;
-(void)setAuxiliaryAlignment:(int)arg1 ;
-(void)setHideVerticalDivider:(char)arg1 ;
-(void)setTitleAlign:(int)arg1 ;
-(void)setTitleWeight:(int)arg1 ;
-(void)setThumbnailCropCircle:(char)arg1 ;
-(void)setImageOverlay:(_SFPBImage *)arg1 ;
-(void)setRatingText:(NSString *)arg1 ;
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
-(void)setPlayActionAlign:(int)arg1 ;
-(void)setTitleNoWrap:(char)arg1 ;
-(void)setHasTopPadding:(char)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1 ;
-(int)separatorStyle;
-(char)titleNoWrap;
-(int)titleWeight;
-(_SFPBActionItem *)playAction;
-(_SFPBImage *)reviewGlyph;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)addOffers:(id)arg1 ;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1 ;
-(void)addMoreGlyphs:(id)arg1 ;
-(void)setRichSubtitle:(_SFPBRichText *)arg1 ;
-(void)setSubtitleIsEmphasized:(char)arg1 ;
-(NSString *)ratingText;
-(char)reviewNewLine;
-(int)auxiliaryAlignment;
-(char)hideVerticalDivider;
-(int)titleAlign;
-(char)thumbnailCropCircle;
-(_SFPBImage *)imageOverlay;
-(int)playActionAlign;
-(_SFPBRichText *)richSubtitle;
-(char)subtitleIsEmphasized;
-(void)clearMoreGlyphs;
-(unsigned long long)moreGlyphsCount;
-(id)moreGlyphsAtIndex:(unsigned long long)arg1 ;
@end

