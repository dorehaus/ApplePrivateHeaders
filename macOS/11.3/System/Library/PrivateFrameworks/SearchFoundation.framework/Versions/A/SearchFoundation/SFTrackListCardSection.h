/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTitleCardSection.h>
#import <libobjc.A.dylib/SFTrackListCardSection.h>
@class NSArray, NSString, SFColor, NSDictionary, NSData;


@protocol SFTrackListCardSection <SFTitleCardSection>
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
@property (nonatomic,copy) NSArray * tracks; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setTitle:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(void)setTracks:(id)arg1;
-(NSArray *)tracks;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(char)arg1;
-(void)setHasTopPadding:(char)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1;
-(int)separatorStyle;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFTrackListCardSection : SFTitleCardSection <SFTrackListCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	char _canBeHidden;
	char _hasTopPadding;
	char _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _tracks;

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
@property (nonatomic,copy) NSArray * tracks;                                         //@synthesize tracks=_tracks - In the implementation block
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
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(void)setTracks:(NSArray *)arg1 ;
-(NSArray *)tracks;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(char)arg1 ;
-(void)setHasTopPadding:(char)arg1 ;
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
@end

