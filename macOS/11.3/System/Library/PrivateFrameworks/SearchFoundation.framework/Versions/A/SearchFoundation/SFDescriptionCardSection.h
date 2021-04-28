/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTitleCardSection.h>
#import <libobjc.A.dylib/SFDescriptionCardSection.h>
@class NSArray, NSString, SFColor, SFText, SFImage, NSNumber, NSURL, NSDictionary, NSData;


@protocol SFDescriptionCardSection <SFTitleCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) char canBeHidden; 
@property (assign,nonatomic) char hasTopPadding; 
@property (assign,nonatomic) char hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SFText * descriptionText; 
@property (nonatomic,copy) NSString * expandText; 
@property (nonatomic,retain) SFImage * image; 
@property (assign,nonatomic) char titleNoWrap; 
@property (nonatomic,copy) NSNumber * titleWeight; 
@property (nonatomic,copy) NSNumber * descriptionSize; 
@property (nonatomic,copy) NSNumber * descriptionWeight; 
@property (assign,nonatomic) char descriptionExpand; 
@property (assign,nonatomic) int imageAlign; 
@property (assign,nonatomic) int textAlign; 
@property (nonatomic,copy) NSString * attributionText; 
@property (nonatomic,copy) NSURL * attributionURL; 
@property (nonatomic,retain) SFImage * attributionGlyph; 
@property (nonatomic,copy) NSArray * richDescriptions; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setImage:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(SFImage *)image;
-(SFColor *)backgroundColor;
-(SFText *)descriptionText;
-(void)setDescriptionText:(id)arg1;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(int)textAlign;
-(void)setTextAlign:(int)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(char)arg1;
-(void)setTitleWeight:(id)arg1;
-(void)setExpandText:(id)arg1;
-(void)setTitleNoWrap:(char)arg1;
-(void)setDescriptionSize:(id)arg1;
-(void)setDescriptionWeight:(id)arg1;
-(void)setDescriptionExpand:(char)arg1;
-(void)setImageAlign:(int)arg1;
-(void)setAttributionText:(id)arg1;
-(void)setAttributionURL:(id)arg1;
-(void)setAttributionGlyph:(id)arg1;
-(void)setHasTopPadding:(char)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1;
-(int)separatorStyle;
-(NSString *)expandText;
-(char)titleNoWrap;
-(NSNumber *)titleWeight;
-(NSNumber *)descriptionSize;
-(NSNumber *)descriptionWeight;
-(char)descriptionExpand;
-(int)imageAlign;
-(NSString *)attributionText;
-(NSURL *)attributionURL;
-(SFImage *)attributionGlyph;
-(NSArray *)richDescriptions;
-(void)setRichDescriptions:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFText, SFImage, NSNumber, NSURL, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFDescriptionCardSection : SFTitleCardSection <SFDescriptionCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	char _canBeHidden;
	char _hasTopPadding;
	char _hasBottomPadding;
	char _titleNoWrap;
	char _descriptionExpand;
	int _separatorStyle;
	int _imageAlign;
	int _textAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	SFText* _descriptionText;
	NSString* _expandText;
	SFImage* _image;
	NSNumber* _titleWeight;
	NSNumber* _descriptionSize;
	NSNumber* _descriptionWeight;
	NSString* _attributionText;
	NSURL* _attributionURL;
	SFImage* _attributionGlyph;
	NSArray* _richDescriptions;

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
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) SFText * descriptionText;                               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * expandText;                                    //@synthesize expandText=_expandText - In the implementation block
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) char titleNoWrap;                                       //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * titleWeight;                                   //@synthesize titleWeight=_titleWeight - In the implementation block
@property (nonatomic,copy) NSNumber * descriptionSize;                               //@synthesize descriptionSize=_descriptionSize - In the implementation block
@property (nonatomic,copy) NSNumber * descriptionWeight;                             //@synthesize descriptionWeight=_descriptionWeight - In the implementation block
@property (assign,nonatomic) char descriptionExpand;                                 //@synthesize descriptionExpand=_descriptionExpand - In the implementation block
@property (assign,nonatomic) int imageAlign;                                         //@synthesize imageAlign=_imageAlign - In the implementation block
@property (assign,nonatomic) int textAlign;                                          //@synthesize textAlign=_textAlign - In the implementation block
@property (nonatomic,copy) NSString * attributionText;                               //@synthesize attributionText=_attributionText - In the implementation block
@property (nonatomic,copy) NSURL * attributionURL;                                   //@synthesize attributionURL=_attributionURL - In the implementation block
@property (nonatomic,retain) SFImage * attributionGlyph;                             //@synthesize attributionGlyph=_attributionGlyph - In the implementation block
@property (nonatomic,copy) NSArray * richDescriptions;                               //@synthesize richDescriptions=_richDescriptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) char isCentered; 
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
-(void)setImage:(SFImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFImage *)image;
-(SFColor *)backgroundColor;
-(SFText *)descriptionText;
-(void)setDescriptionText:(SFText *)arg1 ;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)textAlign;
-(void)setTextAlign:(int)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(char)arg1 ;
-(void)setTitleWeight:(NSNumber *)arg1 ;
-(void)setExpandText:(NSString *)arg1 ;
-(void)setTitleNoWrap:(char)arg1 ;
-(void)setDescriptionSize:(NSNumber *)arg1 ;
-(void)setDescriptionWeight:(NSNumber *)arg1 ;
-(void)setDescriptionExpand:(char)arg1 ;
-(void)setImageAlign:(int)arg1 ;
-(void)setAttributionText:(NSString *)arg1 ;
-(void)setAttributionURL:(NSURL *)arg1 ;
-(void)setAttributionGlyph:(SFImage *)arg1 ;
-(void)setHasTopPadding:(char)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1 ;
-(int)separatorStyle;
-(NSString *)expandText;
-(char)titleNoWrap;
-(NSNumber *)titleWeight;
-(NSNumber *)descriptionSize;
-(NSNumber *)descriptionWeight;
-(char)descriptionExpand;
-(int)imageAlign;
-(NSString *)attributionText;
-(NSURL *)attributionURL;
-(SFImage *)attributionGlyph;
-(NSArray *)richDescriptions;
-(void)setRichDescriptions:(NSArray *)arg1 ;
-(char)hasCanBeHidden;
-(char)hasHasTopPadding;
-(char)hasHasBottomPadding;
-(char)hasSeparatorStyle;
-(char)hasTitleNoWrap;
-(char)hasDescriptionExpand;
-(char)hasImageAlign;
-(char)hasTextAlign;
@end

